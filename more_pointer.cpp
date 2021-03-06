///more on structure
/*#include<bits/stdc++.h>
using namespace std;
struct sd
{
    int name;
    char df[40];
};
int main()
{
    //sd ami;
    struct sd* ps;//ami ekhane  (struct sd) typer ekta pointer create korlam
    ps = (struct sd*)malloc(sizeof(struct sd));//tar address er jonno
    ps -> name = 34;//address ta je dike point kore ace tar modhe 34 rakhi..
    cout<<ps->name<<endl;
    return 0;
}*/
///free
/*#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int* p = (int*)malloc(sizeof(int));
    int x = 10;
    p = &x;
    printf("%p\n",p);
    free(p);
    p = NULL;
    printf("%d\n",p);
    return 0;
}*/
/*///malloc. struct er size()
#include<bits/stdc++.h>
using namespace std;
struct mystruct
{
    int f;
    char d;
};
int main()
{
    printf("%d\n",sizeof(struct mystruct));
    //malloc(sizeof(int));//alocation memory for any kind of data type
    /*int ar[5];//int = 5 = 5*4 = 20;//alocation memory for any variable
    printf("%d",sizeof(ar));
    return 0;

}*/
/*#include<bits/stdc++.h>
using namespace std;
char* change()
{
    char* p;
    p =(char*)malloc(sizeof(char));
    *p='t';
    return p;
}
int main()
{
    char* h = change();
    printf("%c\n",*h);
    int y;
    y = 100;
    printf("%d\n",y);
    printf("%c\n",*h);
    return 0;
}*/
///malloc use kore stack mamory problem sought out..
