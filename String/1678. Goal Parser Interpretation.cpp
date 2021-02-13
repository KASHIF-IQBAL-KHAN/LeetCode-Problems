/*
Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function would be added by LeetCode's Online Judge.*/

/*
// @author Kashif Iqbal
// @since 13-Jan-2020


class Solution {
public:
    string interpret(string command) {
        for(int itr=0; itr<command.size(); itr++){
            if(command[itr] == '('){
                if(command[itr+1] == ')'){
                    command.replace(itr , 2 , "o");
                }
                else if(command[itr+1] == 'a'){
                    command.replace(itr , 4 , "al");
                }
            }
        }
        return command;
    }
};