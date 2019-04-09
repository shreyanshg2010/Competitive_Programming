#include<iostream>
using namespace std;
void waitingtime(int p[],int n,int bt[],int wt[],int at[]){
    int ct[n];
    ct[0]=0;
    wt[0]=0;
    for(int i=1;i<n;i++){
        ct[i]=bt[i-1]+ct[i-1];
        wt[i]=ct[i]-at[i];
        if(wt[i]<0)
            wt[i]=0;
    }
}

void turnaroundtime(int p[],int n,int bt[],int wt[],int tat[]){
    for(int i=0;i<n;i++)
        tat[i]=bt[i]+wt[i];
}
void avgtime(int p[],int n,int bt[],int at[])
{
    int wt[n],tat[n];
    waitingtime(p,n,bt,wt,at);
    turnaroundtime(p,n,bt,wt,tat);
    cout<<"Processes"<<"Burst Time"<<"Arrival Time"<<"Waiting Time"<<"TurnAround Time\n";
    int t_wt=0,t_tat=0;
    for(int i=0;i<n;i++){
        t_wt=t_wt+wt[i];
        t_tat=t_tat+tat[i];
        cout << " " << i+1 << "\t\t" << bt[i] << "\t\t"
             << at[i] << "\t\t" << wt[i] << "\t\t "
             << tat[i]  <<  "\n";
    }
      cout << "Average waiting time = "
         << (float)t_wt / (float)n; 
    cout << "\nAverage turn around time = "
         << (float)t_tat / (float)n; 
} 
int main(){
     int processes[] = {1, 2, 3}; 
    int n = sizeof processes / sizeof processes[0]; 
  
    // Burst time of all processes 
    int burst_time[] = {5, 9, 6}; 
  
    // Arrival time of all processes 
    int arrival_time[] = {0, 3, 6}; 
  
    avgtime(processes, n, burst_time, arrival_time); 
  return 0;
}
