#include<iostream>
using namespace std;
int main()
{
 
int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,p1,p2,n,o,p,ans,ll,lldd,llav,llea,llcl;

for(n=1;n<=3;n++)

	{
	p=1;
	lldd=0;
	llav=0;
	llea=0;
	llcl=0;

	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
	cout<<"\n\n\t\t\t         Season 6";

	cout<<"\n\n\n\n\n\t\t\t          Coded By -:  ";
	cout<<"\n\n\n\t\t\t         Ram Prasad Agarwal  ";
	cout<<"\n\n\n\n\t\t       Press 1 To Start Game";
	cout<<"\n\n\t\t               Or";
	cout<<"\n\n\t\t    Press 2 To Read Rule Of This Game";
	cin>>ans;

	if(ans==2)

		{
		cout<<"\n\n\n\n\n\n\t\t\t   ****** RULES ******";
		cout<<"\n\n\n\t   Game Kaun Banega Crore Pati Is Consist Of 13 (Thirteen) Levels";
		cout<<"\n\n\t   Which Start From Rs. 5,000 (Five Thousand) And End At";
		cout<<"\n\n\t   Rs. 5,00,00,000 (Five Crores). Amoung The 13 (Thirteen) Levels";
		cout<<"\n\n\t   You May Lock Any 2 (Two) Levels As Payao Where Your Will Secure";
		cout<<"\n\n\t   That Particular Amout Of That Level.. But Interesting Point Is";
		cout<<"\n\n\t   That You Are Not Suppose To Quit The Game.. ";
		cout<<"\n\n\n\n\t\t Secondly If You Chose Illegal Life Line Code Or Same Life";
		cout<<"\n\n\t   Line Code Which You Have Used Previously Then You Will Definately";
		cout<<"\n\n\t   Lose The Game..";

		}

	else if(ans==1)

		{
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";
		cout<<"\n\n\n\n\t\t  5,00,00,000";
		cout<<"\n\n\t\t  1,00,00,000";
		cout<<"\n\n\t\t    50,00,000";
		cout<<"\n\n\t\t    25,00,000";
		cout<<"\n\n\t\t    12,50,000";
		cout<<"\n\n\t\t     6,40,000";
		cout<<"\n\n\t\t     3,20,000";
		cout<<"\n\n\t\t     1,60,000";
		cout<<"\n\n\t\t       80,000";
		cout<<"\n\n\t\t       40,000";
		cout<<"\n\n\t\t       20,000";
		cout<<"\n\n\t\t       10,000";
		cout<<"\n\n\t\t        5,000";

		cout<<"\n\n\n\n\t\t  Enter Your First Payao";
		cin>>p1;

		cout<<"\n\n\t\t   Enter Your Secound Payao";
		cin>>p2;
		}

	
	 

	cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
	cout<<"\n\n\t\t\t         Season 6";

	cout<<"\n\n\n\t  Question For Rs. 5000";
	cout<<"\n\n\n\n      Que -:     ";
	a++;
	if(a>6)
	a=1;
	switch (a)      /* Level First */

		{

		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 7:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		}

	
if(p==2)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 10000";
		cout<<"\n\n\n\n      Que -:     ";
		b++;
		if(b>6)
		b=1;
		switch (b)      /* Level Secound */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==3)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 20000";
		cout<<"\n\n\n\n      Que -:     ";
		c++;
		if(c>6)
		c=1;
		switch (c)      /* Level Third */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==4)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 40000";
		cout<<"\n\n\n\n      Que -:     ";
		d++;
		if(d>6)
		d=1;
		switch (d)      /* Level Forth */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==5)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 80000";
		cout<<"\n\n\n\n      Que -:     ";
		e++;
		if(e>6)
		e=1;
		switch (e)      /* Level Fifth */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==6)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 160000";
		cout<<"\n\n\n\n      Que -:     ";
		f++;
		if(f>6)
		f=1;
		switch (f)      /* Level Sixth */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==7)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 320000";
		cout<<"\n\n\n\n      Que -:     ";
		g++;
		if(g>6)
		g=1;
		switch (g)      /* Level Seventh */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==8)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 640000";
		cout<<"\n\n\n\n      Que -:     ";
		h++;
		if(h>6)
		h=1;
		switch (h)      /* Level Eighth */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==9)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 1250000";
		cout<<"\n\n\n\n      Que -:     ";
		i++;
		if(i>6)
		i=1;
		switch (i)      /* Level Nineth */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==10)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 2500000";
		cout<<"\n\n\n\n      Que -:     ";
		j++;
		if(j>6)
		j=1;
		switch (j)      /* Level Tenth */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==11)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 5000000";
		cout<<"\n\n\n\n      Que -:     ";
		k++;
		if(k>6)
		k=1;
		switch (k)      /* Level Eleventh */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	}

	if(p==12)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 10000000";
		cout<<"\n\n\n\n      Que -:     ";
		l++;
		if(l>6)
		l=1;
		switch (l)      /* Level Twelth */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}
	if(p==13)

		{
		 
		cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
		cout<<"\n\n\t\t\t         Season 6";

		cout<<"\n\n\n\t  Question For Rs. 50000000";
		cout<<"\n\n\n\n      Que -:     ";
		m++;
		if(m>6)
		m=1;
		switch (m)      /* Level Thirth */

		{
		case 1:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 2:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 3:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 4:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 5:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;

		case 6:
		cout<<" a ";                        /* Question */
		cout<<"\n\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */
		cout<<"\n\n\n\t\t";
		cout<<" a ";                        /* Option */

		cout<<"\n\n\n\t\t\t     Your Answer (1/2/3/4)   ";
		cout<<"\n\n\n\t\t\t                Or";
		cout<<"\n\n\n\t\t\t   Press 9 To Use Life Lines     ";
		cin>>ans;
		if (ans==1)                        /* Correct Option */

			{
			cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
			cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
			
			p++;
			break;
			}

		else if (ans==9)

			{
			 
			cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
			cout<<"\n\n\t\t\t         Season 6";

			cout<<"\n\n\n\t  Question For Rs. 5000";

			cout<<"\n\n\n\n\n\t\t\t\t  Life Line";

			if(lldd==0)
			cout<<"\n\n\n\t\t  1: Double Dip(Chose Two Answers)";

			if(llav==0)
			cout<<"\n\n\t\t  2: Audiance Vote(Get Help From The Audiance)";

			if(llea==0)
			cout<<"\n\n\t\t  3: Expert Advise(Get Advise From Ram Prasad Agarwal)";

			if(llcl==0)
			cout<<"\n\n\t\t  4: Clue(Get Clue For This Question)";

			cout<<"\n\n\n\n\t Warning :: Do Not Enter Wrong Code,If You Do So You May Lose This Game..";

			cout<<"\n\n\t Enter Your Choice: (";

			if(lldd==0)
			cout<<"1/";

			if(llav==0)
			cout<<"2/";

			if(llea==0)
			cout<<"3/";

			if(llcl==0)
			cout<<"4";

			cout<<")\t";
			cin>>ll;

			switch(ll)

				{
				case 1:

				if(lldd==0)

					{
					 
					lldd++;

					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t     ****Double Dip****";

					cout<<"\n\n\n   Que  -:   ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */

					cout<<"\n\n\n\t\t\t   Enter Your First Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else
					 
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   Your Answer Is Wrong";

					cout<<"\n\n\n   Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Enter Your Second Answer (1/2/3/4)  \t";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else if(ans!=1)

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 2:

				if(llav==0)

					{
					 
					llav++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";

					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\t\t\t   **** Audiance Vote ****";

					cout<<"\n\n\n\n      Que -:     ";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a "<<" 25%";                        /* Option */

					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;
					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}
					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 3:

				if (llea==0)

					{
					 
					llea++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KAUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t   ****Expert Advise****";
					cout<<"\n\n\n\n\t  Ram Prasad Agarwal Advise You For Option ";
					cout<<"  ";                         /* Correct Option */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				case 4:

				if (llcl==0)

					{
					 
					llcl++;
					cout<<"\n\n\n\n\n\n\n\n\n\t\t\t   KOUN BANEGA CRORE PATI";
					cout<<"\n\n\t\t\t         Season 6";
					cout<<"\n\n\n\t  Question For Rs. 5000";

					cout<<"\n\n\n\n\t\t\t       **** Clue ****";
					cout<<"\n\n\n\n\t Clue For This Question Is -:\n\n\n\t\t ";
					cout<<"  ";                         /* Clue */
					cout<<"\n\n\n\t  Que -:";
					cout<<" a ";                        /* Question */
					cout<<"\n\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t";
					cout<<" a ";                        /* Option */
					cout<<"\n\n\n\t\t\t   Your Answer (1/2/3/4) -:   ";
					cin>>ans;

					if (ans==1)                        /* Correct Option */

						{
						cout<<"\n\n\n\n\t\t\t  Your Answer Is Correct";
						cout<<"\n\n\n\t\t\t  Press Enter To Proceed To Next Question";
						
						p++;
						break;
						}

					else

						{
						cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
						break;
						}
					}

					else

						{
						break;
						}

				}
			}
		else
			{
			cout<<"\n\n\n\n\t\t\t  Ohhhhh!!!! Sorry Your Answer Is worng";
			break;
			}
			break;
		}

	}


cout<<"\n\n\n\n\t\t\t  You won Rs -:";

 
}}}
