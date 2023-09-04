#include<iostream>
using namespace std;
int main(){
    int quant;
    int choice;
    // quantity.......
    int qrooms=0, qpasta=0, qburger=0, qnoodles=0, qshake=0, qchicken=0;
    //sold out.........
    int srooms=0, spasta=0, sburger=0, snoodles=0, sshake=0, schicken=0;
    // total price of items..........
    int trooms=0, tpasta=0, tburger=0, tnoodles=0, tshake=0, tchicken=0;
    // input.....
    cout<<"\n\t QUANTITY OF ITEMS WE HAVE: "<< endl;
    cout<<"\n Rooms Available: ";
    cin>> qrooms;
    cout<<"\n Quantity of Pasta: ";
    cin>> qpasta;
    cout<<"\n Quantity of Burger: ";
    cin>> qburger;
    cout<<"\n Quantity of Noodles: ";
    cin>> qnoodles;
    cout<<"\n Quantity of Shake: ";
    cin>> qshake;
    cout<<"\n Quantity of Chicken: ";
    cin>> qchicken;
    // menu.....
    m:
    cout<<"\n\t\t\t Please Select From Menu: ";
    cout<<"\n\n 1) Rooms";
    cout<<"\n 2) Pasta";
    cout<<"\n 3) Burger";
    cout<<"\n 4) Noodles";
    cout<<"\n 5) Shake";
    cout<<"\n 6) Chicken";
    cout<<"\n 7) Information Regarding Sales and Collection ";
    cout<<"\n 8)  Exit";
    // choice......
    cout<<"\n\n Please Enter your Choice! ";
    cin>> choice;
    switch (choice)
    {
    case 1: cout<< "\n\nEnter the number of rooms you want: ";
        cin>> quant;
        if (qrooms-srooms>=quant)
        {
            srooms=srooms+quant;
            trooms=trooms+(quant*1200);
            cout<<"\n\n\t\t"<<quant<<"Room/Rooms have been alotted to you: ";
        }
        else
            cout<<"\n\tOnly "<<qrooms-srooms<<"Rooms are remaining in hotel ";
        
        break;
    case 2: cout<< "\n\nEnter the Pasta Quantity: ";
        cin>> quant;
        if (qpasta-spasta>=quant)
        {
            spasta=spasta+quant;
            tpasta=tpasta+(quant*200);
            cout<<"\n\n\t\t"<<quant<<"Pasta is order! ";
        }
        else
            cout<<"\n\tOnly "<<qpasta-spasta<<" remaining Pasta in hotel ";
        
        break;
    case 3: cout<< "\n\nEnter the Burger Quantity: ";
        cin>> quant;
        if (qburger-sburger>=quant)
        {
            sburger=sburger+quant;
            tburger=tburger+(quant*150);
            cout<<"\n\n\t\t"<<quant<<"Burger is order! ";
        }
        else
            cout<<"\n\tOnly "<<qburger-sburger<<" remaining Burger in hotel ";
        
        break;
    case 4: cout<< "\n\nEnter the Noodles Quantity: ";
        cin>> quant;
        if (qnoodles-snoodles>=quant)
        {
            snoodles=snoodles+quant;
            tnoodles=tnoodles+(quant*200);
            cout<<"\n\n\t\t"<<quant<<"Noodles is order! ";
        }
        else
            cout<<"\n\tOnly "<<qnoodles-snoodles<<" remaining Noodles in hotel ";
        
        break;
    case 5: cout<< "\n\nEnter the Shakes Quantity: ";
        cin>> quant;
        if (qshake-sshake>=quant)
        {
            sshake=sshake+quant;
            tshake=tshake+(quant*120);
            cout<<"\n\n\t\t"<<quant<<"Shake is order! ";
        }
        else
            cout<<"\n\tOnly "<<qshake-sshake<<" remaining shake in hotel ";
        
        break;
    case 6: cout<< "\n\nEnter the Chicken-roll Quantity: ";
        cin>> quant;
        if (qchicken-schicken>=quant)
        {
            schicken=schicken+quant;
            tchicken=tchicken+(quant*250);
            cout<<"\n\n\t\t"<<quant<<"Chicken-roll is order! ";
        }
        else
            cout<<"\n\tOnly "<<qchicken-schicken<<" remaining chicken-roll in hotel ";
        
        break;
    case 7:
        cout<<"\n\t Details of Sales & Collection : ";
        cout<<"\n\n Number of rooms we had : "<<qrooms;
        cout<<"\n\n Number of rooms we gave for rent : "<<srooms;
        cout<<"\n\n Remaining Rooms : "<<qrooms-srooms;
        cout<<"\n\n Total Rooms Collection of the day : "<<trooms;
    
        cout<<"\n\n Number of Pasta we had : "<<qpasta;
        cout<<"\n\n Number of Pasta we Sold : "<<spasta;
        cout<<"\n\n Remaining Pasta : "<<qpasta-spasta;
        cout<<"\n\n Total Pasta Collection of the day : "<<tpasta;
        
        cout<<"\n\n Number of Burger we had : "<<qburger;
        cout<<"\n\n Number of Burger we Sold : "<<sburger;
        cout<<"\n\n Remaining Burger : "<<qburger-sburger;
        cout<<"\n\n Total Burger Collection of the day : "<<tburger;
        
        cout<<"\n\n Number of Noodles we had : "<<qnoodles;
        cout<<"\n\n Number of Noodles we Sold : "<<snoodles;
        cout<<"\n\n Remaining Noodles : "<<qnoodles-snoodles;
        cout<<"\n\n Total Noodles Collection of the day : "<<tnoodles;
        
        cout<<"\n\n Number of Shake we had : "<<qshake;
        cout<<"\n\n Number of Shake we Sold : "<<sshake;
        cout<<"\n\n Remaining Shake : "<<qshake-sshake;
        cout<<"\n\n Total Shake Collection of the day : "<<tshake;

        cout<<"\n\n Number of Chicken-roll we had : "<<qchicken;
        cout<<"\n\n Number of Chicken-roll we Sold : "<<schicken;
        cout<<"\n\n Remaining Chicken-roll : "<<qchicken-schicken;
        cout<<"\n\n Total Chicken-roll Collection of the day : "<<tchicken;
        cout<<"\n\n\n Total Collection of the Day : "<<trooms+tpasta+tburger+tnoodles+tshake+tchicken;

    case 8:
        exit(0);

    default:
        cout<< "\nPlease select Numbers Mentioned Above! ";
        break;
    }
    goto m;
    
}