#include <cstdio>
int month[13][2]={{0,0},{31,31},{28,29},{31,31},{30,30},{31,31},{30,30},{31,31},{31,31},{30,30},{31,31},{30,30},{31,31}};
bool leap(int y){
	return(y%4==0&&y%100!=0||y%400==0);
}
int main(){
	int t1,y1,m1,d1;
	int t2,y2,m2,d2;
	while(scanf("%d%d",&t1,&t2)!=EOF){
		if(t1>t2){
			int t=t1;
			t1=t2;
			t2=t;
		}
		y1=t1/10000,m1=t1%10000/100,d1=t1%100;
		y2=t2/10000,m2=t2%10000/100,d2=t2%100;
		int day=1;
		while(y1<y2||m1<m2||d1<d2){
			d1++;
			if(d1==month[m1][leap(y1)]+1){
				m1++;
				d1=1;
			}
			if(m1==13){
				y1++;
				m1=1;
			}
			day++;
		}
		printf("%d\n",day);
	}
	return 0;
}
