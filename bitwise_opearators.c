/************************************
 * This is for Bit manipulation programs
 * Author:Anvesh G
 *Date: 19-090-2024
 ************************************/
 #include<stdio.h>
#include<stdlib.h>
#define Cls_() printf("\033[2J\033[H")

int main()
{
    int number = 0;
    char choice = '\0';
    int bit_position = 0, nibble_position = 0, byte_position = 0,bit_value=0,nibble_value=0,byte_value=0;
    printf("*****Enter a number you want*****\n");
    scanf("%d",&number);
	printf("---------------------------------------------------------------------\n");
	printf("Before modification Number Binary Representation\n");
	for(int i=31;i>=0;i--)
	{
		printf("%d",(number>>i)&1);
		if(i%8==0)
			printf(" ");
	}
	printf("\n---------------------------------------------------------------------\n");

    while(1)
    {
        printf("\nSelect your choice\n1.Read_Bit/Nible/Byte\n2.Write_Bit/Nibble/Byte\n3.Clear_Bit/Nibble/Byte\n4.Clear_screen\n5.Exit\n");
        scanf(" %c", &choice);

        switch(choice)
        {
            case '1':
                while(1)
                {
                    printf("\nSelect your Choice in Read_operations:\n1.Read_Bit\n2.Read_Nibble\n3.Read_Byte\n4.Clear_screen\n5.Exit\n");
                    scanf(" %c", &choice);

                    switch(choice)
                    {
                        case '1':
                            printf("Enter bit position you want to read (choose 0 to 31):\n");
                            scanf("%d", &bit_position);

                            printf("The bit_value is: %d at %d position\n",(number>>bit_position)&1, bit_position);
                            break;

                        case '2':
                            printf("Enter nibble position you want to read (choose 1 to 8):\n");
                            scanf("%d", &nibble_position);

                            printf("The nibble_value is: %d at %d position\n", ((number>>(nibble_position-1)*4)&0xF), nibble_position);
                            break;

                        case '3':
                            printf("Enter byte position you want to read (choose 1 to 4):\n");
                            scanf("%d", &byte_position);

                            printf("The byte_value is: %d at %d position\n", ((number>>(byte_position-1)*8)&0xFF), byte_position);
                            break;

                        case '4': 
                            Cls_();
                            break;

                        case '5':
                            exit(0);

                        default:
                            printf("Please select the correct choice:\n");
                            break;
                    }
                    
                }
                break;
				
			case '2':
				while(1)
				{
					printf("\nSelect your Choice in Write_operations:\n1.Write_Bit\n2.Write_Nibble\n3.Write_Byte\n4.Clear_screen\n5.Exit\n");
                    scanf(" %c", &choice);
					switch(choice)
					{
						case '1':
                            printf("Enter the bit_Position(0 t0 31) and bit_value you want(0 or 1) to modify:\n");
							scanf("%d%d",&bit_position,&bit_value);
							
							number=number&(~(1<<bit_position)) |(bit_value<<bit_position);
	
                            printf("After modification Number Binary Representation:\n");
							for(int i=31;i>=0;i--)
							{
								printf("%d",(number>>i)&1);
								if(i%8==0)
									printf(" ");
							}
                            break;

                        case '2':
                            printf("Enter the nibble_Position (0-7) and nibble_value (0-15):\n");
							scanf("%d%d", &nibble_position, &nibble_value);

                            number = (number & ~(0xF << (nibble_position * 4))) | (nibble_value << (nibble_position * 4));
							
							printf("---------------------------------------------------------------------\n");			
							printf("After modification, Number Binary Representation:\n");
							for (int i = 31; i >= 0; i--) {
								printf("%d", (number >> i) & 1);
								if (i % 8 == 0)
									printf(" ");
							}
							printf("\n---------------------------------------------------------------------\n");
							break;

                        case '3':
                            printf("Enter the byte_Position (0-3) and byte_value (0-255):\n");
							scanf("%d%d", &byte_position, &byte_value);

                            number = (number & ~(0xFF << (byte_position * 8))) | (byte_value << (byte_position * 8));
							printf("---------------------------------------------------------------------\n");
							printf("After modification, Number Binary Representation:\n");
							for (int i = 31; i >= 0; i--) {
								printf("%d", (number >> i) & 1);
								if (i % 8 == 0)
									printf(" ");
							}
							printf("\n---------------------------------------------------------------------\n");
							break;

                        case '4': 
                            Cls_();
                            break;

                        case '5':
                            exit(0);

                        default:
                            printf("Please select the correct choice:\n");
                            break;
					}
					
				}
				break;
				
			case '3':
				while(1)
				{
					printf("\nSelect your Choice in Write_operations:\n1.Clear_Bit\n2.Clear_Nibble\n3.Clear_Byte\n4.Clear_screen\n5.Exit\n");
                    scanf(" %c", &choice);
					switch(choice)
					{
						case '1':
                            printf("Enter the bit_Position you want to clear (0-31):\n");
							scanf("%d", &bit_position);
							
							number = number & ~(1 << bit_position);
	
                            printf("---------------------------------------------------------------------\n");
							printf("After clearing bit, Number Binary Representation:\n");
							for (int i = 31; i >= 0; i--) {
								printf("%d", (number >> i) & 1);
								if (i % 8 == 0)
									printf(" ");
							}
							printf("\n---------------------------------------------------------------------\n");
							break;

                        case '2':
                            printf("Enter the nibble_Position (0-7) you want to clear:\n");
							scanf("%d", &nibble_position);
							
                            number = number & ~(0xF << (nibble_position * 4));
							printf("---------------------------------------------------------------------\n");
							printf("After clearing nibble, Number Binary Representation:\n");
							for (int i = 31; i >= 0; i--) {
								printf("%d", (number >> i) & 1);
								if (i % 8 == 0)
									printf(" ");
							}
							printf("\n---------------------------------------------------------------------\n");
							break;

                        case '3':
                            printf("Enter the byte_Position (0-3) you want to clear:\n");
							scanf("%d", &byte_position);

                             number = number & ~(0xFF << (byte_position * 8));
							printf("---------------------------------------------------------------------\n");
							printf("After clearing byte, Number Binary Representation:\n");
							for (int i = 31; i >= 0; i--) {
								printf("%d", (number >> i) & 1);
								if (i % 8 == 0)
									printf(" ");
							}
							printf("\n---------------------------------------------------------------------\n");
							break;

                        case '4': 
                            Cls_();
                            break;

                        case '5':
                            exit(0);

                        default:
                            printf("Please select the correct choice:\n");
                            break;
					}
					
				}
				break;					
				
			case '4': 
                    Cls_();
                    break;

            case '5':
                    exit(0);
			default:
                    printf("Please select the correct choice:\n");
                    break;
        }
    }

    return 0;
}
