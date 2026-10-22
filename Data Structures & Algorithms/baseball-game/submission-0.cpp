// [5,D,+,C]
// [5,10,15 ,delete5]
class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<int> ith;
        int sum = 0;

        for(int i = 0; i < op.size(); i++){
            if(op[i] == "C"){
                ith.pop();
            }
            else if(op[i] == "D"){
                int x = ith.top();
                ith.push(2 * x);
            }
            else if(op[i] == "+"){
                int x = ith.top();
                ith.pop();
                int y = ith.top();
                int z = x + y;
                ith.push(x);
                ith.push(z);
            }
            else{
                
                ith.push(stoi(op[i]));
            }
        }
        while(!ith.empty()){
            sum += ith.top();
            ith.pop();
        }
        return sum;
        
    }
};