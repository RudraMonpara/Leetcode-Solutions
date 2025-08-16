bool isPalindrome(int x) {

    if (x < 0){ return false;}
    int num=x;
    long long rev_num=0;

    while(x>0){
        rev_num = rev_num * 10 + x % 10;
        x /= 10;
    }

    return num == rev_num;
isPalindrome(121);
}
