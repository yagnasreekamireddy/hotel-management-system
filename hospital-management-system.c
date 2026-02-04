#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
void room_facility();
void food();
void amenities();
void check_in_or_out();
void cancellation_refund();
int coust_id[10];
int checked_in[10];
char check;
int room_type;
int main()
{
	int choice;
	while(choice != 6)
	{
		printf("\n###################################################################################\n");
		printf("\n                           HOTEL MANAGEMENT SYSTEM                                 \n");
		printf("\n***********************************************************************************\n");
		printf("\n                          WELCOME TO HOTEL DEL LUNA                                \n");
		printf("Choose from the following facility :                                                 \n");
		printf("\n1)Room facility\n2)Food and Beverages\n3)Amenities\n4)Check in/Check out\n5)Cancellation and refund policy\n6)Exit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		printf("\n###################################################################################\n");
		switch(choice)
		{
			case 1:
			room_facility();
			break;
			case 2:
			food();
			break;
			case 3:
			amenities();
			break;
			case  4:
			check_in_or_out();
			break;
			case 5:
			cancellation_refund();
			break;
			case 6:
			printf("\nExiting........");
			
			break;
			default:
			printf("\nEnter the Choice from the above facility\n");
			
			
			
		}
	}
}
void room_facility()
{      int yes_no=1;
       char bookmy;
       int id = 1001;
       int i = 0;
       int price[20] = {200,300,400,500,1000};
       while(yes_no==1 || yes_no==2 )
       {
		printf("###################################################################################\n");
		printf("\nSelect from the following room types: \n");
		printf("\n1)Single Room\n2)Double Room\n3)King room\n4)Executive Suite\n5)President Suite\n6)Exit\n");
		printf("\nEnter your choice :  ");
		scanf("%d",&room_type);
		switch(room_type)
		{
			case 1:
			printf("Room you have selected is Single room\nyour room facility are:\n A room assigned to one person.\nMay have one or more beds.The room size or area of Single Rooms are generally between 37 m² to 45 m².\n");
			printf("\nWould you like to take the room. If yes press 0 or press 1 :  ");
			scanf("%d",&yes_no);
			break;
			case 2:
			printf("A room assigned to two people. May have one or more beds.\nThe room size or area of Double Rooms are generally between 40 m² to 45 m².\n");
			printf("\nWould you like to take the room. If yes press 0 or press 1 :  ");
			scanf("%d",&yes_no);
			break;
			case 3:
			printf("A room with a king-sized bed. May be occupied by one or more people.\nThe room size or area of King Rooms are generally between 32 m² to 50 m².\n");
			printf("\nWould you like to take the room. If yes press 0 or press 1 :  ");
			scanf("%d",&yes_no);
			break;
			case 4:
			printf("A parlour or living room connected with to one or more bedrooms.\nA room with one or more bedrooms and a separate living space.\n");
			printf("\nWould you like to take the room. If yes press 0 or press 1 :  ");
			scanf("%d",&yes_no);
			break;
			case 5:
			printf("The most expensive room provided by a hotel.\nUsually, only one president suite is available in one single hotel property. Similar to the normal suites, a president suite always has one or more bedrooms and a living space with a strong emphasis on grand in-room decoration, high-quality amenities and supplies, and tailor-made services \n");
			printf("\nWould you like to take the room. If yes press 0 or press 1 :  ");
			scanf("%d",&yes_no);
			break;
			case 6:
			printf("\nExiting........");
			break;
			default:
				printf("\nEnter the Choice from the above room\n");

		 }
   
	       if (yes_no == 0)
	       {
	       	printf("\nYour room cost you $ %d /Night\nif you like to book your room press [y]'",price[room_type-1]);
	       	scanf("%s",&bookmy);
	       }
	       if(bookmy == 'y')
	       {
	       printf("\nyour room has been booked\n");
	       printf("Your ID is %d",id);
	       coust_id[i] = id;
	       id = id+1;
	       i = i+1;
	       bookmy='n';
	       printf("\nWould you like to book another room if yes press [2] : ");
	       scanf("%d",&yes_no);
	       if (yes_no != 2){
	                break;
	       }
	       printf("\nWould you like to check in\nIf yes then press [y] :  \n");
	       scanf("%s",&check);
	       if (check == 'y'){
	       		check_in_or_out();
	       }
	       }
	       else if (bookmy != 'y'|| room_type == 6){
	       yes_no = 2;
	       }
	       
       }
}
void food()
{
	int food_no;
	int food_price[50]={50,40,80,50,30,40,100,250,100,300};
	int id;
	char conf;
	int i,temp;
	printf("######################################################################################\n");
	printf("\n                         Welcome to the Food section                                \n");
	printf("\n************************************************************************************\n");
	printf("\n                                  MENU                                              \n");
	printf("######################################################################################\n");
	printf("\nSelect from the following : ");
	printf("\n1. Masala Dosa\n2. Chaat\n3. Vada Pav\n4. Idli\n5. Paratha\n6. Naan\n7. Aloo Gobi\n8. Butter Chicken\n9. Dal Tadka\n10. Tandoori Chicken\n");
	printf("\nOrder please : ");
	scanf("%d",&food_no);
	printf("Are you a customer of our hotel ?\nIf yes then enter your ID we will do door delivery : ");
	scanf("%d",&id);
	for(i=0;i<=sizeof(coust_id);i++)
	{
		if( coust_id[i] == id )
		{
			printf("\nYour order will cost you $%d and it will be delivery to your room\n If you want to proceed then press [y] : ",food_price[food_no-1]);
			scanf("%s",&conf);
			if (conf == 'y')
			{
				printf("your order will be delivered in 10 min\n");
				temp = 0;
				break;
			}
			else{
			temp = 0;
			break;}
		}
		else{
		temp = 404;
		}
		
	}
	if (temp == 404)
	{
		printf("We can't find your room.\nSo your order will cost you $%d if you want to proceed then press [y]: ",food_price[food_no-1]);
		scanf("%s",&conf);
		if (conf == 'y')
			{
				printf("your order will get ready in 10 min\n");
			}
	}

}
void amenities()
{	
	int id , temp;
	int i;
	time_t t;
	time(&t);
	
        printf("######################################################################################\n");
	printf("\n                         Welcome to the Amenities section                           \n");
	printf("\n************************************************************************************\n");
	printf("\n                                                                                    \n");
	printf("######################################################################################\n");
	printf("\nEnter your ID to access the Amenities : ");
	scanf("%d",&id);
	for(i=0;i<=sizeof(coust_id);i++)
	{
		if( coust_id[i] == id )
		{
			printf("Welcome sir!\nSelect from the following : ");
			printf("\n1)Fitness center\n2)Swimming pool\n3)spa facilities\n4)Meeting rooms\n5)Exit");
			printf("\nEnter your choice :  ");
			scanf("%d",&temp);
			switch(temp)
		{
			case 1:
			printf("\nYou can access the Fitness center from %s",ctime(&t));
			break;
			case 2:
			if (room_type == 3|| room_type ==4|| room_type ==5)
			{
				printf("\nYou can access the Swimming pool from %s",ctime(&t));
			}
			else{
				printf("\nYour room type can not include the Swimming pool");
			}
			break;
			case 3:
			if (room_type == 3|| room_type ==4|| room_type ==5)
			{
				printf("\nYou can access the spa facilities from %s",ctime(&t));
			}
			else{
				printf("\nYour room type can not include the spa facilities");
			}
			break;
			case  4:
			if (room_type == 4 || room_type == 5)
			{
				printf("\nYou can access the Meeting rooms from %s",ctime(&t));
			}
			else{
				printf("\nYour room type can not include the Meeting rooms");
			}
			break;
			case 5:
			printf("\nExiting.............\n");
			break;
			default:
			printf("\nEnter the Choice from the above facility\n");
	
		}
		break;
	}else if (i == sizeof(coust_id) ){
	printf("\n Your are not our hotel customer.\nSo you can't use our Amenities section");
	break;
	}
	
	
     }
}
void check_in_or_out()
{	int id,i,j=0,k,p;
	int check_i;
	time_t t;
	time(&t);
	printf("######################################################################################\n");
	printf("\n                       Welcome to the check_in_or_out section                       \n");
	printf("\n************************************************************************************\n");
	printf("\n                                                                                    \n");
	printf("######################################################################################\n");
	printf("\nEnter your ID to access the Check_in/Check_out : ");
	scanf("%d",&id);
	for(i=0;i<=sizeof(coust_id);i++)
	{
		if (coust_id[i] == id)
		{
			printf("Welcome sir!\nIf you want to check_in then press[0] and for check_out press[1] : ");
			scanf("%d",&check_i);
			if (check_i == 0){
				printf("Ok sir,\nYou have checked In at %s",ctime(&t));
				checked_in[j] = id ;
				j = j++;
				break;
				}
			else if (check_i == 1){
				for(k=0;k<=sizeof(checked_in);k++){
					if (checked_in[k] == id){
						printf("Thank you for staying in our hotel sir!\nHope you like our hospitality. Visit again.\n");
						for(p=k;p<9;p++){
							checked_in[p] = checked_in[p+1];
						}
						break;
					}
					else if (k == sizeof(checked_in)){
						printf("\nYou have not checked in sir!");
					}
				}
			}	
			}
		}
		
		
	
}
void cancellation_refund()
{
	int id,i;
	printf("######################################################################################\n");
	printf("\n                       Welcome to the Refund section                       \n");
	printf("\n************************************************************************************\n");
	printf("\n                                                                                    \n");
	printf("######################################################################################\n");
	printf("\nEnter your ID for refund : ");
	scanf("%d",&id);
	for(i=0;i<= 9;i++)
	{
		if (checked_in[i] == id){
			printf("\nYour refund is not possible.\nAs you have alredy Checked In");
			break;
		}
		else
		{
			printf("\nSir you have not checked In. So you will get full refund\nYou will receive your money in coming 24 hours");
			break;
		}
	}
}

