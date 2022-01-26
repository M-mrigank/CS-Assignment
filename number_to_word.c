#include<stdio.h>
#include<string.h>

int main(){
    char n[50];
    printf("Enter number n: ");
    scanf("%s", &n);

    int len=strlen(n);
    int index;

    char *one_digit[]={"zero","one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char *two_digit1[]={"","ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    char *two_digit2[]={"","","twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    char *three_digit[]={"","one hundred","two hundred","three hundred","four hundred","five hundred","six hundred","seven hundred", "eight hundred","nine hundred"};
    char *four_digit[]={"","one thousand","two thousand","three thousand","four thousand","five thousand","six thousand", "seven thousand","eight thousand","nine thousand"};

    if(len==1){
        index=n[0]-48;
        printf("%s", one_digit[index]);
    }

    if(len==2 && n[0]=='1'){
        index=(n[0]-48)+(n[1]-48);
        printf("%s", two_digit1[index]);
    }

    else if(len==2 && n[1]=='0'){
        index=(n[0]-48)+(n[1]-48);
        printf("%s", two_digit2[index]);
    }

    else if(len ==2 && n[0]!=1 && n[1]!=0){
        index=n[0]-48;
        printf("%s ",two_digit2[index]);
        index=n[1]-48;
        printf("%s", one_digit[index]);
    }

    if(len==3 && n[2]=='0' && n[1]=='0'){
        index=(n[0]-48)+(n[1]-48)+(n[2]-48);
        printf("%s", three_digit[index]);
    }

    else if(len==3 && n[2]!='0' && n[1]=='0'){
        index=(n[0]-48);
        printf("%s ", three_digit[index]);
        index=n[2]-48;
        printf("%s", one_digit[index]);
    }

    else if(len==3 && n[1]!='0' && n[1]!='1' && n[2]!='0'){
        index=(n[0]-48);
        printf("%s ", three_digit[index]);
        index=(n[1]-48);
        printf("%s ", two_digit2[index]);
        index=n[2]-48;
        printf("%s",one_digit[index]);
    }

    else if(len==3 && n[1]=='1'){
        index=(n[0]-48);
        printf("%s ", three_digit[index]);
        index=(n[1]-48)+(n[2]-48);
        printf("%s ", two_digit1[index]);        
    }

    if(len==4 && n[1]=='0' && n[2]=='0' && n[3]=='0'){
        index=(n[3]-48)+(n[2]-48)+(n[2]-48)+(n[1]-48)+(n[0]-48);
        printf("%s",four_digit[index]);
    }

    else if(len==4 && n[1]=='0' && n[2]=='0' && n[3]!=0){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[3]-48;
        printf("%s", one_digit[index]);
    }

    else if(len==4 && n[1]=='0' && n[2]!='0' && n[2]!='1' && n[3]!='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[2]-48;
        printf("%s ",two_digit2[index]);
        index=n[3]-48;
        printf("%s",one_digit[index]);
    }

    else if(len==4 && n[1]=='0' && n[2]=='1'){
        index=n[0]-48;
        printf("%s ",four_digit[index]);
        index=(n[2]-48)+(n[3]-48);
        printf("%s",two_digit1[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]=='0' && n[3]=='0'){
        index=n[0]-48;
        printf("%s ",four_digit[index]);
        index=(n[1]-48)+(n[2]-48)+(n[3]-48);
        printf("%s", three_digit[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]=='0' && n[3]!='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[1]-48;
        printf("%s ",three_digit[index]);
        index=n[3]-48;
        printf("%s", one_digit[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]!='0' && n[2]!='1' && n[3]=='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[1]-48;
        printf("%s ",three_digit[index]);
        index=(n[2]-48)+(n[3]-48);
        printf("%s",two_digit2[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]!='0' && n[2]!='1' && n[3]!='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[1]-48;
        printf("%s ",three_digit[index]);
        index=(n[2]-48);
        printf("%s ",two_digit2[index]);
        index=(n[3]-48);
        printf("%s",one_digit[index]);
    }

    else if(len==4 && n[1]!='0' && n[2]=='1' && n[3]!='0'){
        index=n[0]-48;
        printf("%s ", four_digit[index]);
        index=n[1]-48;
        printf("%s ",three_digit[index]);
        index=(n[2]-48)+(n[3]-48);
        printf("%s ",two_digit1[index]);
    }

    return 0;
}