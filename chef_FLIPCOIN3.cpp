#include<stdio.h>

int getmid(int s, int e) {  return s + (e -s)/2;  }
 

struct node
{
	int flips;
	int heads;
	
};

 struct node tree[300000];

void update(int index,int tl,int tr,int l,int r)
{
	//  l and r are the limits of current segment
	//  tl tr are the  end points of range. ..   0 & n-1 respectively
	//   index is initially 1  ;;;  the root;  consider 1 indexing
	
	
	if(l==tl && r==tr)
	{   //  checks if current range is the complete range
		tree[index].flips++;
		tree[index].heads=tr-tl+1-tree[index].heads;
		return;
		
	}
	
	
	int mid=getmid(tl,tr);
	int left=2*index;
	int right=2*index+1;
	
	if(r<=mid)
	{
		update(left,tl,mid,l,r);   //  we are moving to left child so index is left
	}
	
	else if(l>mid)
	{
	 	update(right,mid+1,tr,l,r);   //  moved towards right child;;   so index is right  
	} 
	
	else
	{
		update(left,tl,mid,l,mid);  ///   l and r are passed{ the asked range} is passed as it is  ;;   but the end ranges change   //  tl is 0 always
		update(right,mid+1,tr,mid+1,r);   //   tr replaced by mid and vice versa
	}
	
	tree[index].heads=tree[left].heads+tree[right].heads;
	
	if(tree[index].flips%2==1)    //  we get heads up at even values;;;  as initially  alll tails up
	    tree[index].heads=tr-tl+1-tree[index].heads;

	
	
}

int query(int index,int tl,int tr,int l ,int r,int toss)
{
	if(tl==l && tr==r)
	{
		if(toss%2==1)
		    return tr-tl+1-tree[index].heads;
			
			else
			return tree[index].heads;
		
	}
	
	toss+=tree[index].flips;
	int mid=getmid(tl,tr);
	int left=2*index;
	int right=left+1;
	
	if(r<=mid)
	   return   query(left,tl,mid,l,r,toss);
	
	if(l>mid)
	   return query(right,mid,tr,l,r,toss);
		
	 else return query(left,tl,mid,l,mid,toss)+query(right,mid+1,tr,mid+1,r,toss);   
		
		
}

int main()
{
	int N,Q,type,left,right;
	scanf("%d%d",&N,&Q);
	while(Q--)
	{
		scanf("%d%d%d",&type,&left,&right);
		if(type==0)
		   update(1,0,N-1,left,right);
		
		else
		printf("%d\n",query(1,0,N-1,left,right,0));
		
	}
	
	
	return 0;
}
