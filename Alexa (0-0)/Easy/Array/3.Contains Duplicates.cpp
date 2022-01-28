/*
Alexa Arreola 27/01/2022
1. Regresa true si se repite más de una vez cualquier valor, de lo contrario false.

Constraints:

1 <= nums.length <= 10 a la 5
-10 a la 9 <= nums[i] <= 10 a la 9

2. Ejemplo

Input: nums = [1,2,3,1]
Output: true
    
Input: nums = [1,2,3,4]
Output: false

3. Brute Force
Ir de número en número buscando otro igual en el resto del arreglo...complejidad O(n^2)

4. Optimizar
Utilizar una hash table que lleve la cuenta...O(n)

//26 min...no había leido  bien el valor a regresar

*/


#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        //Hashmap: key, valor
        
        unordered_map<int, int> mapita;
        
        for(int i = 0; i <nums.size(); i++){
            
            
            //cout << mapita[nums[i]]<< " ";
            mapita[nums[i]]++;
            //cout << mapita[nums[i]]<< endl;
            
            if(mapita[nums[i]]>1){
                return true;
            }
        }
        return false;
        
        
        
    }
};