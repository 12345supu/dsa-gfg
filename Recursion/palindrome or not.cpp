//Given a string, the task is to write a recursive function to check if the given string is palindrome or not.

bool isPalindrome(char str[], int s, int e) 
{ 
    // If there is only one character 
    if (s == e) 
        return true; 
  
    // If first and last characters do not match 
    if (str[s] != str[e]) 
        return false; 
  
    // If there are more than two characters, check if middle substring is also palindrome or not
    if (s < e) 
        return isPalindrome(str, s + 1, e - 1); 
  
    return true; 
} 
