#include <string>
using namespace std;

class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            int count = 0;
            int count_mamgaize = magazine.length(), count_ransomNote = ransomNote.length();
            
            if(count_ransomNote > count_mamgaize) return false;

            for(int i = 0; i < count_ransomNote; i++)
            {
                for(int j = 0; j < count_mamgaize; j++)
                {
                    if(ransomNote[i] == magazine[j])
                    {
                        magazine[j] = '0';
                        count++;
                        break;
                    }
                }
            }

            if(count == count_ransomNote) return true;
            return false;
        }
    };