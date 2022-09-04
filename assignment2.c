#include<stdio.h> 
#include<time.h> 
#include<stdlib.h> 
int main(){ 
int temp; 
int random; 
char alpha[26]; 
srand(time(0)); 
char names[47][20]={"aabhash","aastha","alok","amish","amshuman","anmol", "binisha","chirag","deepika","dipesh","kamal","krima", "lasta","manish","milan","nayan", "nirdesika","nulok","perisha","prabin","rachana","rashik","rivu","rohan","rubin","usha"}; 
//to generate letters from a to z 
for(int i=0;i<26;i++){ 
alpha[i]=97+i; 
} 
//to shuffle letters 
for(int i=0;i<26;i++){ 
random=rand()%26; 
temp=alpha[i]; 
alpha[i]=alpha[random]; 
alpha[random]=temp; 
} 
//to print name in random generated pattern 
for(int i=0;i<26;i++){ 
for(int j=0;j<46;j++){ 
if(alpha[i]==names[j][0]){ 
printf("%s\n",names[j]); 
} 
} 
} 
}
