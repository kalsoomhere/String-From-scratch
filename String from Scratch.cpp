#include <iostream>
#include <clocale>
#include <cstdlib>
using namespace std;
 
// display Intro ()
void displayIntro ()
{
    cout << "************************************************************************************************************************" << endl << endl;
    cout << "                                                  BSCS Semester-1                                                       " << endl << endl;
    cout << "                                                  GROUP ASSIGNMENT                                                      " << endl << endl;
    cout << "                                          Subject : Programming Fundamentals                                            " << endl << endl;
    cout << "                                           Assignemnt topic : STRING CLASS                                              " << endl << endl;
    cout << "                                        Submitted to : Ma'am FIZZAH JAHANGIR                                            " << endl << endl;    
    cout << "                          Participants : KALSOOM (463), KIYNAT (465), FIZZA (491), SUMAIKA (408-A)                      " << endl << endl;
    cout << "************************************************************************************************************************" << endl << endl;
}

// void display show ()
void displayShow ()
{
	cout << "************************************************************************************************************************" << endl << endl;
	cout << "                                               Function Contribution                                                    " << endl << endl;
	cout << "************************************************************************************************************************" << endl << endl;
	cout << "                          KIYNAT  (465)   : memcpy , memmove , strcpy , strncpy , strcat                                " << endl << endl;
	cout << "                          SUMAIKA (408-A) : strncat , memcmp , strcmp , strcoll , strncmp                               " << endl << endl;
	cout << "                          FIZZA   (491)   : memchr , strchr , strcspn , strpbrk , strrchr                               " << endl << endl;
	cout << "                          KALSOOM (463)   : strspn , strstr , strtok , memset , strlen                                  " << endl << endl;
	cout << "************************************************************************************************************************" << endl << endl;
}

// display Menu ()
void displayMenu ()
{ 
    cout << "************************************************************************************************************************" << endl << endl;
    cout << "                                       Welcome to String operation program                                              " << endl << endl;
    cout << "************************************************************************************************************************" << endl << endl;
    cout << "                                 EXIT     : To exit the program                           (PRESS 0)                     " << endl; 
    cout << "                                 memcpy   : To copy block of memory                       (PRESS 1)                     " << endl;
    cout << "                                 memmove  : To move block of memory                       (PRESS 2)                     " << endl;
    cout << "                                 strcpy   : To copy a string                              (PRESS 3)                     " << endl;
    cout << "                                 strncpy  : To copy limited characters from string        (PRESS 4)                     " << endl;
    cout << "                                 strcat   : To concatenate two strings                    (PRESS 5)                     " << endl;
    cout << "                                 strncat  : To concatenate limited characters             (PRESS 6)                     " << endl;
    cout << "                                 memcmp   : To compare two blocks of memory               (PRESS 7)                     " << endl;
    cout << "                                 strcmp   : To compare two strings                        (PRESS 8)                     " << endl;
    cout << "                                 strcoll  : To compare two strings using locale settings  (PRESS 9)                     " << endl;
    cout << "                                 strncmp  : To compare n characters of two strings        (PRESS 10)                    " << endl;
    cout << "                                 memchr   : To locate a character in a block of memory    (PRESS 11)                    " << endl;
    cout << "                                 strchr   : To find the first occurrence of a character   (PRESS 12)                    " << endl;
    cout << "                                 strcspn  : To find a first matching character            (PRESS 13)                    " << endl;
    cout << "                                 strbrk   : To find all the matching characters           (PRESS 14)                    " << endl; 
    cout << "                                 strrchr  : To find the last occurrence of a character    (PRESS 15)                    " << endl;
    cout << "                                 strspn   : To find initial matching characters           (PRESS 16)                    " << endl;
    cout << "                                 strstr   : To find a substring in a string               (PRESS 17)                    " << endl;
    cout << "                                 strtok   : To split a string into tokens                 (PRESS 18)                    " << endl;
    cout << "                                 memset   : To fill memory with a value                   (PRESS 19)                    " << endl;
    cout << "                                 strlen   : To get string length                          (PRESS 20)                    " << endl << endl;
    cout << "************************************************************************************************************************" << endl << endl;
    cout << "Enter your choice = ";
}

// memcpy ()
void *myMemcpy(void* destination, const void* source, size_t num) 
{
	char* dest = (char*)destination;
	const char* src = (const char*)source;
	for(size_t i = 0; i < num; i++)
	{
		dest[i] = src[i];
	}
	return destination;
}

// memmove()
void *myMemmove(void *destination, const void *source, size_t num) 
{
    unsigned char *dest = (unsigned char *)destination;
    const unsigned char *src = (const unsigned char *)source;

    if (dest < src || dest >= src + num)
	{  
        for (size_t i = 0; i < num; i++) 
		{
            dest[i] = src[i];
        }
    } 
	else if (dest > src) 
	{  
        for (size_t i = num; i > 0; i--) 
		{
            dest[i - 1] = src[i - 1];
        }
    }  
    return destination;
}

// strcpy ()
char *myStrcpy(char *destination, const char *source)
{
    char *returnStrcpy = destination;
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0'; 
    return returnStrcpy;
}

// strncpy ()
char *myStrncpy(char *destination, const char *source, size_t num)
{
    if (num == 0) 
	{
        return destination;
    }
	char *returnStrncpy = destination;
    size_t i;
    for (i = 0; i < num && source[i] != '\0'; i++)
    {
        destination[i] = source[i];
    }
    while (i < num) 
    {
        destination[i] = '\0';
        i++;
    }
    return returnStrncpy;
}

// strcat ()
char *myStrcat(char *destination, const char *source)
{
    int i = 0, j = 0;
    while (destination[i] != '\0')
    {
        i++;
    }
    while (source[j] != '\0')
    {
        destination[i] = source[j];
        i++;
        j++;
    }
	destination[i] = '\0';
    return destination;
}

// strncat ()
char *myStrncat(char *destination, const char *source, size_t num)
{
    int i = 0, j = 0;
    while (destination[i] != '\0')
    {
        i++;
    }
    while (source[j] != '\0' && j < num)
    {
        destination[i] = source[j];
        i++;
        j++;
    }
    destination[i] = '\0';
    return destination;
}

// memcmp ()
int myMemcmp (const void *ptr1, const void *ptr2, size_t num)
{
	const unsigned char *p1 = (const unsigned char *)ptr1;  
    const unsigned char *p2 = (const unsigned char *)ptr2;

	for (size_t i = 0; i < num; i++)
	{
        if (p1[i] != p2[i])
        {
        	return p1[i] - p2[i];
		}
	}
	return 0;
}

// strcmp ()
int myStrcmp (const char *str1,const char *str2)
{
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0')
	{
        if (str1[i] != str2[i])
        {
        	return str1[i] - str2[i];
		}
		i++;
	}
	return str1[i] - str2[i];
}

// strcoll ()
int myStrcoll(const char* str1, const char* str2) 
{
    while (*str1 && *str2) 
	{
        if (*str1 != *str2)
		{
            return *str1 - *str2;;  
        }
        str1++;
        str2++;
    }
    return *str1 - *str2;    
}
 
// strncmp ()
int myStrncmp (const char *ptr1, const char *ptr2, size_t num)
{
    for (size_t i = 0; i < num; i++)
	{
        if (ptr1[i] != ptr2[i])
        {
        	return ptr1[i] - ptr2[i];
		}
	}
	return 0;	
}
  
// memchr()
void* myMemchr(const void *ptr, int value, size_t num) 
{
    if (num == 0) 
	{
        return 0;
    }
	const unsigned char* p = (const unsigned char*)ptr;    
    for (size_t i = 0; i < num; i++) 
    {
        if (p[i] == (unsigned char)value) 
        {
            return (void*)&p[i];  
        }
    }
    return NULL; 
}  

// strchr()
char* myStrchr(const char* str, char character) 
{
    while (*str != '\0')
	{
        if (*str == character)
		{
            return (char*)str; 
        }
        str++;
    }
    return NULL; 
}

//strcspn
size_t myStrcspn(const char *str1, const char *str2) 
{
    size_t returnStrcspn = 0;
    for (size_t i = 0; str1[i] != '\0'; i++) 
    { 
        for (size_t j = 0; str2[j] != '\0'; j++) 
        { 
            if (str1[i] == str2[j]) 
            {
                return returnStrcspn;  
            }
        }
        returnStrcspn++;  
    }
    return returnStrcspn; 
} 	 

// strpbrk ()
const char *myStrpbrk(const char *str1, const char *str2) 
{
    for (int i = 0; str1[i] != '\0'; i++) 
	{ 
        for (int j = 0; str2[j] != '\0'; j++) 
		{ 
            if (str1[i] == str2[j]) 
			{  
                return (char*)&str1[i];  
            }
        }
    }
    return NULL; 
}
 
// strrchr 
char *myStrrchr(const char *str, int character)
 {
    char *returnStrrchr = NULL;  
    for (int i = 0; str[i] != '\0'; i++) 
	{  
        if (str[i] == character)
		{
            returnStrrchr = (char*)&str[i]; 
        }
    }  
    return returnStrrchr; 
}
 
// strspn ()
size_t myStrspn (const char *str1 ,const char *str2)
{
    if (*str2 == '\0')
	{
        return 0;
    }
	size_t returnStrspn = 0;
	for (size_t i = 0; str1[i] != '\0'; i++)
	{
		bool flag = false;
		for (int j = 0; str2[j] != '\0'; j++)
		{
			if (str1[i] == str2[j])
			{
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			return returnStrspn;
		}
		returnStrspn++;		
	}
	return returnStrspn;
}

// strstr()
const char *myStrstr (const char *str1, const char *str2)
{
    if (*str2 == '\0')
	{
        return str1;
    }
	for (int i = 0; str1[i] != '\0'; i++)
	{
		int j;
		for (j = 0; str2[j] != '\0'; j++)
	    {
			if (str1[i + j] != str2[j])
		    {
		    	break;
			}
	    }
	    if (str2[j] == '\0')
	    {
	    	return &str1[i];
		}
	}
	return NULL;
}

// strtok ()
char* myStrtok(char* str, const char* delimeter)
{
    static char* nextToken = NULL;  
    if (str != NULL) 
	{
        nextToken = str;  
    }
    if (nextToken == NULL)
	{
        return NULL;  
    }

    char* tokenStart = nextToken;  
    while (*nextToken != '\0') 
	{   
        const char* d = delimeter;
        while (*d != '\0') 
		{
            if (*nextToken == *d)
			{  
                *nextToken = '\0';  
                nextToken++;  
                return tokenStart;  
            }
            d++;
        }
        nextToken++;  
    }
    
    if (tokenStart == nextToken)
	{
        return NULL;  
    }
    return tokenStart;  
}

// strlen()
size_t myStrlen (const char *str)
{
	size_t length=0;
    while (str[length] != '\0')
    {
	    length++;
    }
	return length;
}

// memset()
void *myMemset (void *ptr, int value, size_t size)
{
	unsigned char *p = (unsigned char *)ptr;
    unsigned char c = (unsigned char)value;
	for (size_t i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return ptr;
}

// main()
int main ()
{
	displayIntro ();
	system ("pause");
	system ("cls");
	displayShow ();
	system ("pause");
	system ("cls");
	int choice;
	
	do 
	{
		displayMenu ();
	
	    while (true) 
		{
            cin >> choice;

            if (cin.fail() || choice < 0 || choice > 20) 
			{
                cin.clear();
                cin.ignore(100, '\n');
                cout << "Invalid input! Please enter a number between 0 and 20: ";
            } 
			else 
			{
                cin.ignore(); 
                break; 
            }
        }
		
		
		switch (choice)
	    {	
	        //memcpy
	        case 1:
	        {
	        	system ("cls");
	            cout << endl << "                  ************  COPYING A BLOCK OF MEMORY  **************" <<endl;
                char sourceMemcpy[300], destinationMemcpy[300]={0};
                size_t numMemcpy;

                cout << endl << endl << "Enter the source string :";
                cin.getline(sourceMemcpy, 300);

                while (true)
				{
                    cout << "Enter the number of bytes to copy: ";
                    cin >> numMemcpy;

                    if (cin.fail()) 
				    {   
                        cin.clear();   
                        cin.ignore(100, '\n');  
                        cout << "Invalid input! Please enter a numeric value.\n";
                    }
				    else
				    {
                        break; 
                    }
                }
               
                cin.ignore();
                myMemcpy(destinationMemcpy, sourceMemcpy, numMemcpy);
                cout << endl << "Copied string = " << destinationMemcpy << endl;
                break;
	        }
    
            // memmove
		    case 2:
            {
            	system ("cls");
	            cout << endl << "            **************  MOVING BLOCK OF MEMORY  ****************" <<endl;
                char sourceMemmove[300], destinationMemmove[300] = {0};
                size_t numMemmove;

                cout << endl << endl << "Enter the source string :";
                cin.getline(sourceMemmove, 300);

                while (true)
				{
                    cout << "Enter the number of bytes to move: ";
                    cin >> numMemmove;

                    if (cin.fail())
					{  
                        cin.clear();   
                        cin.ignore(100, '\n');  
                        cout << "Invalid input! Please enter a numeric value.\n";
                    }
					else
				    {
                        break; 
                    }
                }
                cin.ignore();
                myMemmove(destinationMemmove, sourceMemmove, numMemmove);
                cout << endl << "Destination after moving = " << destinationMemmove << endl;
                break;
            }
	
	        // strcpy
	        case 3:
	        {
	        	system ("cls");
		        cout << endl << "            **************  LETS COPY STRING  ****************" <<endl;
	            char sourceStrcpy[300], destinationStrcpy[300]= {0};

                cout << endl << endl << "Enter a string :";
                cin.getline(sourceStrcpy,300);

                myStrcpy(destinationStrcpy, sourceStrcpy);

                cout << endl << "Copied string = " << destinationStrcpy << endl;
                break;
            }
	
	        //strncpy
	        case 4:
	        {
	        	system ("cls");
		        cout << endl << "            **************  LETS COPY CHARACTERS FROM STRING  ****************" <<endl;
	            char sourceStrncpy[300], destinationStrncpy[300]= {0};
                size_t numStrncpy;

                cout << endl << endl << "Enter a string :";
                cin.getline(sourceStrncpy, 300);

                while (true) 
				{
                   cout << "Enter number of characters to copy: ";
                   cin >> numStrncpy;
  
                   if (cin.fail())
				    { 
                        cin.clear();    
                        cin.ignore(100, '\n'); 
                        cout << "Invalid input! Please enter a numeric value.\n";
                    }   
				    else
				    {
                       break; 
                    }
                }
                cin.ignore();

                myStrncpy(destinationStrncpy, sourceStrncpy, numStrncpy);
                cout << endl << "Copied string = " << destinationStrncpy << endl;
                break;
            }
    
            //strcat
            case 5:
            {
            	system ("cls");
			    cout << endl << "            **************  CONCATENATION OF TWO STRINGS  ****************" <<endl;
                char destinationStrcat[300], sourceStrcat[300];

                cout << endl << endl << "Enter first string :";
                cin.getline(destinationStrcat,300);

                cout << "Enter second string :";
                cin.getline(sourceStrcat, 300);

                myStrcat(destinationStrcat, sourceStrcat);

                cout << endl << "Concatenated string =" << destinationStrcat << endl;
                break;
            }
	
     	    //strncat
     	    case 6:
     	    {
     	        system ("cls");
			    cout << endl << "            **************  CONCATENATE NO. OF CHARACTERS FROM STRING   ****************" <<endl;
	            char destinationStrncat[300], sourceStrncat[300];
                size_t numStrncat;

                cout << endl << endl << "Enter first string :";
                cin.getline(destinationStrncat,300);

                cout << "Enter second string :";
                cin.getline(sourceStrncat,300);

                while (true)
			    {
                    cout << "Enter number of characters to concatenate: ";
                    cin >> numStrncat;

                    if (cin.fail())
				    {  
                       cin.clear();   
                       cin.ignore(100, '\n'); 
                       cout << "Invalid input! Please enter a numeric value.\n";
                    }
					else
					{
                       cin.ignore();  
                       break; 
                    }
                }
				myStrncat(destinationStrncat, sourceStrncat, numStrncat);
                cout << endl << "Concatenated string: " << destinationStrncat << endl;
                break; 
		    }
	
	        //memcmp
	        case 7:
     	    {
     	    	system ("cls");
	            cout << endl << "            **************  COMPARING TWO BLOCKS OF MEMORY  ****************" <<endl;
	            char str1Memcmp[300],str2Memcmp[300];
	            size_t numMemcmp;
	
	            cout << endl << endl << "Enter the first string :";
	            cin.getline(str1Memcmp,300);
	
         	    cout << "Enter the second string :";
         	    cin.getline(str2Memcmp,300);
	
        	    while (true)
				{
                   cout << "Enter the number of bytes to compare: ";
                   cin >> numMemcmp;

                   if (cin.fail())
				    {  
                        cin.clear();   
                        cin.ignore(100, '\n');
                        cout << "Invalid input! Please enter a numeric value.\n";
                    } 
				    else
				   {
                      cin.ignore(); 
                       break;  
                   }
               }
        	   
	            int resultMemcmp = myMemcmp (str1Memcmp, str2Memcmp, numMemcmp);
                if (resultMemcmp == 0)
	            {
		            cout << endl << str1Memcmp << " is equal to " << str2Memcmp << endl;
	            }	
         	    else if (resultMemcmp < 0)
	            {
	          	    cout << endl << str1Memcmp << " has lower values than " << str2Memcmp << endl;
	            }
	            else
             	{
		            cout << endl << str1Memcmp << " has greater values than " << str2Memcmp << endl;
           	    }
		    	break;
	    	}
	
         	//strcmp
     	    case 8:
     	    {
     	    	system ("cls");
	            cout << endl << "            **************  COMARING TWO STRINGS  ****************" <<endl;
	            char str1Strcmp [300],str2Strcmp [300];
	
	            cout << endl << endl << "Ist string :";
         	    cin.getline(str1Strcmp,300);
	
	            cout << "2nd string :";
        	    cin.getline(str2Strcmp,300);
	
        	    int resultStrcmp = myStrcmp (str1Strcmp,str2Strcmp);
          	    if (resultStrcmp == 0)
          	    {
	           	    cout << endl << str1Strcmp << " is equal to " << str2Strcmp << endl;
        	    }
           	    else if (resultStrcmp < 0)
          	    {
         		    cout << endl << str1Strcmp << " is lower than " << str2Strcmp << endl;
            	}
                else
           	    {
	            	cout << endl << str1Strcmp << " is greater than " << str2Strcmp << endl;
        	    }
            	break;
            }
	
	        //strcoll
	        case 9:
     	    {
     	    	system ("cls");
	            setlocale(LC_ALL, "");
	            cout << endl << "            **************  COMPARING TWO STRINGS USING LOCALE  ****************" <<endl;
        	    char str1Strcoll [300],str2Strcoll [300];
	
                cout << endl << endl << "Ist string :";
                cin.getline(str1Strcoll,300);
	
        	    cout << "2nd string :";
        	    cin.getline(str2Strcoll,300);
	 
                int resultStrcoll;
                resultStrcoll = myStrcoll (str1Strcoll,str2Strcoll);
	
           	    if (resultStrcoll == 0)
           	    {
	        	    cout << endl << str1Strcoll << " is equal to " << str2Strcoll << endl;
        	    }
         	    else if (resultStrcoll < 0)
            	{
            	    cout << endl << str1Strcoll << " has lower values than " << str2Strcoll << endl;
            	}
                else
                {
                	cout << endl << str1Strcoll << " has greater values " << str2Strcoll << endl;
        	    }
            	break; 
            }
	
	        //strncmp
	        case 10:
            {
            	system ("cls");
	            cout << endl << "            **************  COMPARING CHARACTERS OF TWO STRINGS  ****************" <<endl;
	            char str1Strncmp[300],str2Strncmp[300];
	            size_t numStrncmp;
	
                cout << endl << endl << "Enter the first string :";
 	            cin.getline(str1Strncmp,300);
	
	            cout << "Enter the second string :";
	            cin.getline(str2Strncmp,300);
	
       	        while (true) 
				{
                    cout << "Enter the number of bytes to compare: ";
                    cin >> numStrncmp;

                    if (cin.fail() || numStrncmp <= 0)
				   {
                     cin.clear();
                     cin.ignore(100, '\n');
                     cout << "Invalid input! Please enter a positive numeric value.\n";
                   } 
				    else 
					{
                     cin.ignore();
                     break;
                    }
                }
	 
	            int resultStrncmp = myStrncmp (str1Strncmp, str2Strncmp, numStrncmp);
	            if (resultStrncmp == 0)
	            {
		            cout << endl << str1Strncmp << " is equal to " << str2Strncmp << endl;
                }
	            else if (resultStrncmp < 0)
	            {
		            cout << endl << str1Strncmp << " is smaller than " << str2Strncmp << endl;
	            }
 	            else
	            {
		            cout << endl << str1Strncmp << " is greater than " << str2Strncmp << endl;
	            }	
	            break;
	        }
	
	        //memchr
	        case 11:
     	    {
     	    	system ("cls");
	            cout << endl << "            **************  LOCATE CHARACTERS IN THE BLOCK OF MEMORY  ****************" <<endl;
                char strMemchr[300],valueMemchr;
                size_t sizeMemchr;
    
                cout << endl << endl << "Enter a string :";
                cin.getline(strMemchr, 300);
    
                cout << "Enter the character to search :";
                cin >> valueMemchr;
    
                while (true) 
				{
                   cout << "Enter the number of bytes to search: ";
                   cin >> sizeMemchr;

                   if (cin.fail() || sizeMemchr <= 0) 
				   {
                       cin.clear();
                       cin.ignore(100, '\n');
                       cout << "Invalid input! Please enter a positive numeric value.\n";
                    } 
					else 
					{
                      cin.ignore();
                       break;
                    }
               }
               
                void* resultMemchr = myMemchr(strMemchr, valueMemchr, sizeMemchr);
                cout << endl;
                if (resultMemchr != NULL) 
                {
                   cout << "Character '" << valueMemchr << "' found at position = " << (char*)resultMemchr - strMemchr << endl;
                } 
                else 
                {
                    cout << "Character not found!" << endl;
                }
                break;
            }
	
	        //strchr
	        case 12:
     	    {
     	    	system ("cls");
	            cout << endl << "            **************  LOCATING FIRST OCCURENCE OF CHARACTERS IN STRING  ****************" <<endl;
                char strStrchr[300], charStrchr;
    
                cout << endl << endl << "Enter the string :";
                cin.getline(strStrchr, 300);
    
                cout << "Enter the character to find :";
                cin >> charStrchr;
    
                char* resultStrchr = myStrchr(strStrchr, charStrchr);
                cout << endl;
                if (resultStrchr) 
                {
                    int index = resultStrchr - strStrchr;
                    cout << "Character '" << charStrchr << "' found at index = " << index << endl;
                }
                else 
                {
                    cout << "Character not found!" << endl;
                }
                break;
            }
	
            //strcspn
            case 13:
     	    {
     	    	system ("cls");
     	    	cout << endl << "            ************** CHECKING SPAN UNTIL CHAR. IN THE STRING ****************" <<endl;
                 char str1Strcspn[300], str2Strcspn[300];

                cout << endl << endl << "Enter the main string : ";
                cin.getline(str1Strcspn, 300);

                cout << "Enter the characters to search : ";
                cin.getline(str2Strcspn, 300);

            
                size_t resultStrcspn = myStrcspn(str1Strcspn, str2Strcspn);

                cout << endl << "First match at index: " << resultStrcspn << endl;
                break;
            }
	
	        //strpbrk
	        case 14:
     	    {
     	    	system ("cls");
     	    	cout << endl << "            **************  FINDING ALL MATCHING CHARCTERS IN THE STRING ************" <<endl;
                char str1Strpbrk[300], str2Strpbrk[300];

                cout << endl << endl << "Enter the main string : ";
                cin.getline(str1Strpbrk, 300);

                cout << "Enter the characters to search : ";
                cin.getline(str2Strpbrk, 300);

                cout << endl << "Matching characters in '" << str1Strpbrk << "': ";

                const char *resultStrpbrk = myStrpbrk(str1Strpbrk, str2Strpbrk);
                while (resultStrpbrk != NULL)
			    {
                   cout << *resultStrpbrk << " "; 
                   resultStrpbrk  = myStrpbrk(resultStrpbrk  + 1, str2Strpbrk); 
                }
                cout << endl;
                break;
            }

            //strrchr
            case 15:
     	    {
     	    	system ("cls");
     	    	cout << endl << "            **************  LOCATING LAST OCCURENCE OF CHARACTERS IN STRING  ****************" <<endl;
                 char strStrrchr[300];
                 char charStrrchr;

                cout << endl << endl << "Enter a string: ";
                cin.getline(strStrrchr, 300);

                cout << "Enter the character to find: ";
                cin >> charStrrchr;
                cin.ignore(); 
                char* resultStrrchr = myStrrchr(strStrrchr, charStrrchr);

                cout << endl;
                if (resultStrrchr)
				{
                    int indexStrrchr = resultStrrchr - strStrrchr ; 
                    cout << "Last occurrence of '" << charStrrchr << "' found at " << indexStrrchr + 1 << endl;
                }
				else
				{
                    cout << "Character not found in the string!" << endl;
                }
                break;
            }
	
	        //strspn
	        case 16:
     	    {
     	    	system ("cls");
	            cout << endl << "            **************  CHECKING THE SPAN OF CHARACTERS  ****************" <<endl;
	            char checkStrspn[300],allowedStrspn[300];
	
	            cout << endl << endl << "Enter the string to be checked :";
	            cin.getline(checkStrspn,300);
	
	            cout << "Enter the allowed characters :";
	            cin.getline(allowedStrspn,300);
	
	            size_t resultStrspn = myStrspn(checkStrspn,allowedStrspn);
	            cout << endl << "Number of initial matching characters = " << resultStrspn << endl;
	            break;
	        }
	
	        //strstr
	        case 17:
     	    {
     	        system ("cls");
	            cout << endl << "            ************** FINDING SUBSTRINGS  ****************" <<endl;
                char mainStrstr[300], subStrstr[300];

                cout << endl << endl << "Enter the main string: ";
                cin.getline(mainStrstr, 300);

                cout << "Enter the substring to find: ";
                cin.getline(subStrstr, 300);

              
                const char* returnStrstr = myStrstr(mainStrstr, subStrstr);

               if (returnStrstr != NULL)
			   {
        
                   int indexStrstr = returnStrstr - mainStrstr;
                   cout << endl << "Substring '" << subStrstr << "' found at index: " << indexStrstr << endl;
               } 
               
		        else
		        {
                   cout << endl << "Substring not found!" << endl;
                }
				 
				break;
           }

            //strtok
            case 18:
     	    {
			    system ("cls");	
                cout << endl << "            **************  STRING SPLITS INTO TOKENS  ****************" <<endl;
                char strStrtok[300],delimiterStrtok[10];  

                cout << endl << endl << "Enter a sentence :";
                cin.getline(strStrtok,300);

                cout << "Enter a delimiter :";
                cin.getline(delimiterStrtok,10);

                cout << endl << "Splitting the sentence :";
                char* wordStrtok = myStrtok(strStrtok,delimiterStrtok);  
 
                while (wordStrtok != NULL) 
	            {
                    cout << endl << wordStrtok;
                    wordStrtok = myStrtok(NULL, delimiterStrtok);  
                }
                cout << endl;
		    	break;
	       	}

            //memset
	        case 19:
     	    {
     	    	system ("cls");
                cout << endl << "            **************  FILLING BLOCK OF MEMORY  ****************" <<endl;
                unsigned char memsetValue;
	            size_t memsetSize;
	            char strMemset [300];
	        
	            cout << endl << endl << "Enter a string :";
	            cin >> strMemset;
	        
	            cout << "Enter the value to be filled with :";
	            cin >> memsetValue;
	
	            cout << "Enter the size :";
	            cin >> memsetSize;
		
	            myMemset (strMemset,memsetValue, memsetSize);
	            cout << endl << "String after filling = " << strMemset << endl;
	            break;
	        }

	        //strlen
	        case 20:
     	    {
     	    	system ("cls");
	            cout << endl << "            **************  CHECKING LENGTH OF STRING   ****************" <<endl;
	            char checkStrlen[300];
	            size_t resultStrlen;
	
	            cout << endl << endl << "Enter the string whose length to be checked :";
	            cin.getline(checkStrlen,300);
	
                resultStrlen = myStrlen(checkStrlen);
	            cout<< endl << "Length of string = " << resultStrlen << endl;
	            break;
	        }
	        
	        default:
		    {
                cout << "Exit from the Program." << endl;
                break;
            }
        }
        system ("pause");
        system ("cls");
    }
    while (choice != 0);	
	return 0;
}
