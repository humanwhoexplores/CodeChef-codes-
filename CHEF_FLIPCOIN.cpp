#include<stdio.h>
 
 
struct node
{
	int heads;
	int flips;
};
typedef struct node node;
 
node tree[500010];
 
void update(int index, int tl, int tr, int l, int r)
{
	if(tl==l && tr==r)
	{
		tree[index].flips++;
		tree[index].heads=tr-tl+1-tree[index].heads;
		return;
	}
	
	int mid=(tl+tr)>>1;
	int left=index<<1;
	int right=left+1;
	
	if(r<=mid)
	{
		update(left,tl,mid,l,r);
	}
	
	else if(l>mid)
	{
		update(right,mid+1,tr,l,r);
	}
	
	else
	{
		update(left,tl,mid,l,mid);
		update(right,mid+1,tr,mid+1,r);
	}
	
	tree[index].heads=tree[left].heads+tree[right].heads;
	
	if(tree[index].flips%2==1)
	tree[index].heads=tr-tl+1-tree[index].heads;
}
 
int query(int index, int tl, int tr, int l, int r, int flips)
{
	if(tl==l && tr==r)
	{
		if(flips%2==1)
		return tr-tl+1-tree[index].heads;
		
		else return tree[index].heads;
	}
	
	flips+=tree[index].flips;
	
	int mid=(tl+tr)>>1;
	int left=index<<1;
	int right=left+1;
	
	if(r<=mid)
	return query(left,tl,mid,l,r,flips);
	
	else if(l>mid)
	return query(right,mid+1,tr,l,r,flips);
	
	else return query(left,tl,mid,l,mid,flips)+query(right,mid+1,tr,mid+1,r,flips);
}
 
int main()
{
	int n,q,l,r,c;
	
     scanf("%d%d",&n,&q);
	
	while(q--)
	{
		scanf("%d%d%d",&c,&l,&r);
		
		if(c==0)
		{
			update(1,0,n-1,l,r);
		}
		
		else printf("%d\n",query(1,0,n-1,l,r,0));
	}
	
	return 0;
}
  

