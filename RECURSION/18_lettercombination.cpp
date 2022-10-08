// // lled code 17
// 17. Letter Combinations of a Phone Number
//         Medium 12.7K 761 Companies
//             Given a string containing digits from 2 -
//     9 inclusive,
//     return all possible letter combinations that the number could represent.Return the answer in any order.

//            A mapping of digits to
//            letters(just like on the telephone buttons) is given below.Note that 1 does not map to any letters.

//            Example 1 :

//     Input : digits = "23" Output : [ "ad", "ae", "af", "bd", "be", "bf", "cd", "ce", "cf" ] Example 2 :

//     Input : digits = "" Output : [] Example 3 :

//     Input : digits = "2" Output : [ "a", "b", "c" ]

//                                   Constraints :

//                                   0 <= digits.length <= 4 digits[i] is a digit in the range['2', '9'].class Solution
{
public:
    vector<string> key = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;

    void helper(string digits, string temp, int ind)
    {
        if (ind >= digits.length())
        {
            ans.push_back(temp);
            return;
        }
        // because no is in a string
        int num = digits[ind] - '0';
        for (int i = 0; i < key[num].length(); i++)
        {
            helper(digits, temp + key[num][i], ind + 1);
        }
    }
    vector<string> letterCombinations(string digits)
    {
        int index = 0;
        if (digits == "")
        {
            return ans;
        }
        string temp;
        helper(digits, temp, index);
        return ans;
    }
};