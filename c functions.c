//c functions
#include<stdio.h>
#include<math.h>
int multiplication(int units_consumed,int charges_per_unit);
int main(){
	int customer_id,units_consumed,charges_per_unit,total_bill=0;
	char customer_name;
	printf("Enter the cusomer ID:");
	scanf("%d",&customer_id);
	printf("Enter the customer name:");
	scanf("%s",&customer_name);
	printf("Enter the units consumed:");
	scanf("%d",&units_consumed);
	
	total_bill=units_consumed*charges_per_unit;
	printf("total bill=%d",total_bill);

    return 0;
    }

	int multiplication(int units_consumed,int charges_per_unit){
		int total_bill;
		total_bill=units_consumed*charges_per_unit;

	if(units_consumed<= 199,
			charges_per_unit= 1.20){
		printf("total bill is%d\n",total_bill);
		}
	    else if(units_consumed>= 200 &&units_consumed< 400,
			charges_per_unit= 1.50){
		printf("total bill is%d\n",total_bill);
		}
		else if(units_consumed>= 400 &&units_consumed< 600,
			charges_per_unit= 1.80){
		printf("total bill is%d\n",total_bill);
		}
		else(
			charges_per_unit= 2.00);{
		printf("total bill is%d\n",total_bill);	
		}
		return total_bill;
	}
