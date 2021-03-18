#include<bits/stdc++.h>
using namespace std;
int main(){
double mealCost;
int tipPercent;
int taxPercent;
int totalCost;
cin>>mealCost; 
cin>>tipPercent; 
cin>>taxPercent;
tipPercent=round(mealCost*tipPercent/100);
taxPercent=round(mealCost*taxPercent/100);
totalCost=mealCost+tipPercent+taxPercent;
cout<<totalCost;
}
