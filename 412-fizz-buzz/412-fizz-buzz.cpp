class Solution {
public:
    vector<string> fizzBuzz(int n) {
        int i=0;
        vector<string> arr;
         int num=1;
        while(i<n){
        if(num%3==0&&num%5!=0)
        {
            arr.push_back("Fizz");
        }
            else if(num%5==0&&num%3!=0)
            {
                arr.push_back("Buzz");
            }
            else if(num%5==0&&num%3==0)
            {
                arr.push_back("FizzBuzz");
            }
        else
        {
            arr.push_back(to_string(num));
        }
            i++;
            num++;
       
    }
     return arr;   
    }
    
};