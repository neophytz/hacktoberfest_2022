#include<bits/stdc++.h>  
3:  #include<conio.h>  
4:  using namespace std;  
5:    
6:  void add(char a[3][3],char inp,char ch)  
7:  {  
8:       int num=inp-49,row,col;  
9:       row=num/3,col=num%3;  
10:       a[row][col]=ch;  
11:  }  
12:    
13:  void disp(char a[3][3])  
14:  {  
15:       cout<<"nttPress Esc anytime to quit the gamennnn";  
16:       int i,j;  
17:       for(i=0;i<3;i++)  
18:       {  
19:            cout<<"tttt-------------ntttt";  
20:            for(j=0;j<3;j++)  
21:            {  
22:                 if(a[i][j]=='a') cout<<"|  ";  
23:                 else  
24:                      cout<<"| "<<a[i][j]<<" ";  
25:            }  
26:            cout<<"|"<<endl;  
27:       }  
28:       cout<<"tttt-------------n";  
29:  }  
30:    
31:  int check(char a[3][3],char inp)  
32:  {  
33:       int num=inp-48,row,col;  
34:       if(num<=0 || num>=10) return 0;  
35:       num--;  
36:       row=num/3;  
37:       col=num%3;  
38:       if(a[row][col]=='a') return 1;  
39:       else return 0;  
40:  }  
41:    
42:  char gameover(char a[3][3])  
43:  {  
44:       char winner='a';  
45:       if(a[0][0]==a[0][1] && a[0][0]==a[0][2] && a[0][0]!='a') winner=a[0][0];  
46:       if(a[1][0]==a[1][1] && a[1][0]==a[1][2] && a[1][0]!='a') winner=a[1][0];  
47:       if(a[2][0]==a[2][1] && a[2][0]==a[2][2] && a[2][0]!='a') winner=a[2][0];  
48:       if(a[0][0]==a[1][0] && a[0][0]==a[2][0] && a[0][0]!='a') winner=a[0][0];  
49:       if(a[0][1]==a[1][1] && a[0][1]==a[2][1] && a[0][1]!='a') winner=a[0][1];  
50:       if(a[0][2]==a[1][2] && a[0][2]==a[2][2] && a[0][2]!='a') winner=a[0][2];  
51:       if(a[0][0]==a[1][1] && a[0][0]==a[2][2] && a[0][0]!='a') winner=a[0][0];  
52:       if(a[0][2]==a[1][1] && a[0][2]==a[2][0] && a[0][2]!='a') winner=a[0][2];  
53:       return winner;  
54:  }  
55:    
56:  int draw(char a[3][3])  
57:  {  
58:       for(int i=0;i<3;i++)  
59:            for(int j=0;j<3;j++)  
60:                 if(a[i][j]=='a')  
61:                      return 0;  
62:       return 1;  
63:  }  
64:    
65:  int main()  
66:  {  
67:       cout<<"nnnntttTic Tac ToennnttPress any key to continue";  
68:       getch();  
69:       char a[3][3],turn[2]={'X','O'},ch='X',inp,winner,res;  
70:       do  
71:       {  
72:            a[0][0]=a[0][1]=a[0][2]=a[1][0]=a[1][1]=a[1][2]=a[2][0]=a[2][1]=a[2][2]='a';  
73:            system("cls");  
74:            disp(a);  
75:            cout<<"nnttt"<<ch<<"'s Turnnn";  
76:            int count=0;  
77:            while(1)  
78:            {  
79:                 inp=getch();  
80:                 system("cls");  
81:                 if(inp<=48 || inp>=58 || !check(a,inp))  
82:                 {  
83:                      disp(a);  
84:                      cout<<"nnttt"<<ch<<"'s Turnnn";  
85:                      cout<<"INVALID MOVE!!nn";  
86:                 }  
87:                 else  
88:                 {  
89:                      add(a,inp,ch);  
90:                      disp(a);  
91:                      winner=gameover(a);  
92:                      if(winner=='a')  
93:                      {  
94:                           if(draw(a))  
95:                           {  
96:                                cout<<"nntttMatch Drawn !!n";  
97:                                break;  
98:                           }  
99:                           ch=turn[(++count)%2];  
100:                           cout<<"nnttt"<<ch<<"'s Turnnn";  
101:                      }  
102:                      else  
103:                      {  
104:                           cout<<"nnttt"<<winner<<" Won !!n";  
105:                           break;  
106:                      }  
107:                 }            
108:            }  
109:            getch();  
110:            system("cls");  
111:            cout<<"nnnntttWant to play more ? (Y/N) : ";  
112:            cin>>res;  
113:       }while(res=='y' || res=='Y');  
114:  }  