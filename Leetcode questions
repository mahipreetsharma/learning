LC 1: Two Sum (LeetCode #1)

Problem: Given an array of integers nums and an integer target, return indices of the two numbers 
that add up to target. You may assume exactly one solution.

Intuition
We need to find a + b = target. For each element a, we look for target - a in the array.

Brute Force Approach
Check every pair of numbers.

vector<int> twoSum(vector<int>& nums, int target) {
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                return {i, j};
            }
        }
    }
    return {};
}

Time Complexity: O(n²) - nested loops
Space Complexity: O(1) - no extra space

Optimized Approach (Hash Map)
Store each number's index as we iterate. For current number, check if complement exists.

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> numToIndex;  // value -> index
    
    for(int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        if(numToIndex.find(complement) != numToIndex.end()) {
            return {numToIndex[complement], i};
        }
        
        numToIndex[nums[i]] = i;
    }
    return {};
}

Time Complexity: O(n) - single pass with O(1) hash lookups
Space Complexity: O(n) - storing up to n elements in hash map

Explanation
The hash map stores each value and its index. When we see a new number, we check if its complement 
(target minus current) already exists in the map. If yes, we found our pair. If not, we add current 
number to map and continue. This works in one pass.

LC 2: Contains Duplicate (LeetCode #217)
Problem: Given an integer array nums, return true if any value appears at least twice, else return false.

Intuition
We can detect duplicates by tracking seen elements. If we encounter an element we've seen before, 
duplicate exists.

Brute Force Approach
Compare each element with every other element.

bool containsDuplicate(vector<int>& nums) 
    int n = nums.size();
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] == nums[j]) return true;
        }
    }
    return false;
}

Time Complexity: O(n²)
Space Complexity: O(1)

Optimized Approach (Hash Set)
Use a set to track seen numbers.

bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    
    for(int x : nums) {
        if(seen.count(x)) return true;
        seen.insert(x);
    }
    return false;
}

Time Complexity: O(n) - average case O(1) per operation
Space Complexity: O(n) - storing unique elements

Explanation
As we traverse the array, each number is added to a hash set. Before adding, we check if it 
already exists. If it does, we've found a duplicate. This gives O(1) average lookup time.

LC 3: Valid Palindrome (LeetCode #125)
Problem: Given a string s, return true if it's a palindrome, considering only alphanumeric 
characters and ignoring cases.

Intuition
A palindrome reads the same forward and backward. Use two pointers from both ends, 
skip non-alphanumeric characters, and compare after converting to lowercase.

Brute Force Approach
Clean the string first (remove non-alphanumeric, convert to lowercase), then compare with 
reversed version.

bool isPalindrome(string s) {
    string cleaned = "";
    
    // Clean the string
    for(char c : s) {
        if(isalnum(c)) {
            cleaned += tolower(c);
        }
    }
    
    // Check palindrome by comparing with reverse
    string reversed = cleaned;
    reverse(reversed.begin(), reversed.end());
    
    return cleaned == reversed;
}

Time Complexity: O(n) - one pass for cleaning, one for reversing
Space Complexity: O(n) - storing cleaned string

Optimized Approach (Two Pointers)
Process in-place without extra string storage.

bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;
    
    while(left < right) {
        // Move left pointer to next alphanumeric
        while(left < right && !isalnum(s[left])) left++;
        
        // Move right pointer to previous alphanumeric
        while(left < right && !isalnum(s[right])) right--;
        
        // Compare after converting to lowercase
        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }
        
        left++;
        right--;
    }
    return true;
}

Time Complexity: O(n) - each character processed once
Space Complexity: O(1) - only two pointers

Explanation
Two pointers start at ends. Skip non-alphanumeric characters by advancing pointers. 
Compare characters after converting to lowercase. If mismatch found, not a palindrome. 
Continue until pointers cross.

LC 4: Missing Number (LeetCode #268)
Problem: Given an array nums containing n distinct numbers in range [0, n], return 
the only missing number.

Intuition
Sum of first n natural numbers is n*(n+1)/2. Subtract actual sum to get missing number.

Brute Force Approach
Sort and find the missing number by checking each position.

int missingNumber(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    
    for(int i = 0; i < n; i++) {
        if(nums[i] != i) return i;
    }
    return n;
}

Time Complexity: O(n log n) - sorting
Space Complexity: O(1) or O(n) depending on sort implementation

Optimized Approach (Sum Formula)
Use mathematical formula.

int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    
    for(int x : nums) {
        actualSum += x;
    }
    
    return expectedSum - actualSum;
}

Time Complexity: O(n) - single pass to sum
Space Complexity: O(1) - constant extra space

Alternative XOR Approach (No Overflow Risk)

int missingNumber(vector<int>& nums) {
    int xor1 = 0, xor2 = 0;
    int n = nums.size();
    
    // XOR all numbers in array
    for(int x : nums) xor1 ^= x;
    
    // XOR all numbers from 0 to n
    for(int i = 0; i <= n; i++) xor2 ^= i;
    
    return xor1 ^ xor2;  // missing number remains
}

Explanation
The sum formula works because the missing number equals expected sum minus 
ctual sum. XOR approach uses property that a ^ a = 0 and a ^ 0 = a. XORing all numbers 
with all indices cancels out present numbers, leaving the missing one.

LC 5: Intersection of Two Arrays (LeetCode #349)
Problem: Given two integer arrays, return an array of their intersection 
(unique elements common to both).

Intuition
Use sets to handle uniqueness. Store first array in set, then check second array for matches.

Brute Force Approach
Compare each element of first with each of second, track unique results.

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    
    for(int x : nums1) {
        for(int y : nums2) {
            if(x == y) {
                // Check if already in result
                bool found = false;
                for(int z : result) {
                    if(z == x) { found = true; break; }
                }
                if(!found) result.push_back(x);
            }
        }
    }
    return result;
}

Time Complexity: O(n × m × k) - n,m array sizes, k result size
Space Complexity: O(k) - storing result

Optimized Approach (Hash Set)
Use two sets for O(1) lookups.

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> resultSet;
    
    for(int x : nums2) {
        if(set1.count(x)) {
            resultSet.insert(x);
        }
    }
    
    return vector<int>(resultSet.begin(), resultSet.end());
}

Time Complexity: O(n + m) - building sets and checking
Space Complexity: O(n + m) - storing unique elements from both arrays

Explanation
First, create a set from nums1 for O(1) lookups. Then iterate through nums2, 
checking if each element exists in the first set. If found, add to result set 
(automatically handles uniqueness). Finally, convert result set to vector.

LC 6: Fizz Buzz (LeetCode #412)
Problem: Given integer n, return string array where:

"FizzBuzz" for multiples of 3 and 5

"Fizz" for multiples of 3 only

"Buzz" for multiples of 5 only

number string otherwise

Intuition
Simple conditional logic. Check divisibility in correct order (15 first, then 3, then 5).

Brute Force (Only Approach - Already Optimal)
This problem doesn't have a more optimized version - it inherently requires O(n) time.

vector<string> fizzBuzz(int n) {
    vector<string> result;
    
    for(int i = 1; i <= n; i++) {
        if(i % 15 == 0) {
            result.push_back("FizzBuzz");
        }
        else if(i % 3 == 0) {
            result.push_back("Fizz");
        }
        else if(i % 5 == 0) {
            result.push_back("Buzz");
        }
        else {
            result.push_back(to_string(i));
        }
    }
    
    return result;
}
Time Complexity: O(n) - one pass through numbers
Space Complexity: O(n) - storing result (required for output)

Explanation
Check multiples of 15 first because they're also multiples of 3 and 5, but need "FizzBuzz". 
Using elseif ensures correct ordering. Use to_string() to convert numbers to strings.

MEDIUM PROBLEMS (7-10)
LC 7: Group Anagrams (LeetCode #49)
Problem: Given array of strings, group anagrams together. Anagrams are words with same characters 
in different order.

Intuition
Two strings are anagrams if their sorted versions are identical. Use sorted string as key in hash map.

Brute Force Approach
Compare each string with every other to check anagram status.

bool isAnagram(string a, string b) {
    if(a.length() != b.length()) return false;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> result;
    vector<bool> used(strs.size(), false);
    
    for(int i = 0; i < strs.size(); i++) {
        if(used[i]) continue;
        
        vector<string> group;
        group.push_back(strs[i]);
        
        for(int j = i + 1; j < strs.size(); j++) {
            if(!used[j] && isAnagram(strs[i], strs[j])) {
                group.push_back(strs[j]);
                used[j] = true;
            }
        }
        result.push_back(group);
    }
    return result;
}
Time Complexity: O(n² × k log k) - n strings, k max length
Space Complexity: O(n) - tracking used strings

Optimized Approach (Sorting + Hash Map)
Use hash map with sorted string as key.

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> map;
    
    for(string s : strs) {
        string sorted = s;
        sort(sorted.begin(), sorted.end());
        map[sorted].push_back(s);
    }
    
    vector<vector<string>> result;
    for(auto& pair : map) {
        result.push_back(pair.second);
    }
    return result;
}
Time Complexity: O(n × k log k) - n strings, each sorted O(k log k)
Space Complexity: O(n × k) - storing all strings in map

Even Better Approach (Count Sort for ASCII)
Use character frequency as key (avoid sorting overhead).

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> map;
    
    for(string s : strs) {
        vector<int> count(26, 0);
        
        // Count frequency of each character
        for(char c : s) {
            count[c - 'a']++;
        }
        
        // Create key from count array
        string key = "";
        for(int i = 0; i < 26; i++) {
            key += "#" + to_string(count[i]);
        }
        
        map[key].push_back(s);
    }
    
    vector<vector<string>> result;
    for(auto& pair : map) {
        result.push_back(pair.second);
    }
    return result;
}

Time Complexity: O(n × k) - n strings, each of length k
Space Complexity: O(n × k)

Explanation
Two strings are anagrams if their sorted versions are identical. The hash map groups strings 
by their sorted version. For the optimized count sort approach, we create a frequency array of 
26 letters, convert to string key, and use that as the hash key. This avoids the O(k log k) 
sorting overhead.

LC 8: Longest Substring Without Repeating Characters (LeetCode #3)
Problem: Given string s, find length of longest substring without repeating characters.

Intuition
Use sliding window. Maintain window of unique characters. When duplicate found, 
shrink window from left until duplicate removed.

Brute Force Approach
Check all substrings.

int lengthOfLongestSubstring(string s) {
    int maxLen = 0;
    int n = s.length();
    
    for(int i = 0; i < n; i++) {
        unordered_set<char> seen;
        
        for(int j = i; j < n; j++) {
            if(seen.count(s[j])) break;
            seen.insert(s[j]);
            maxLen = max(maxLen, j - i + 1);
        }
    }
    return maxLen;
}
Time Complexity: O(n²) - nested loops
Space Complexity: O(min(n, 26)) - set storage

Optimized Approach (Sliding Window with Two Pointers)
Maintain window with left and right pointers.

int lengthOfLongestSubstring(string s) {
    unordered_set<char> window;
    int left = 0, maxLen = 0;
    
    for(int right = 0; right < s.length(); right++) {
        // If duplicate found, shrink window from left
        while(window.count(s[right])) {
            window.erase(s[left]);
            left++;
        }
        
        window.insert(s[right]);
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
Time Complexity: O(n) - each character processed at most twice
Space Complexity: O(min(n, 26)) - set of unique chars

Most Optimized (HashMap with Jump)
Store indices to jump left pointer directly.

int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> lastIndex;
    int left = 0, maxLen = 0;
    
    for(int right = 0; right < s.length(); right++) {
        char c = s[right];
        
        // If character seen before, move left past its last occurrence
        if(lastIndex.find(c) != lastIndex.end() && lastIndex[c] >= left) {
            left = lastIndex[c] + 1;
        }
        
        lastIndex[c] = right;
        maxLen = max(maxLen, right - left + 1);
    }
    return maxLen;
}
Time Complexity: O(n) - single pass
Space Complexity: O(min(n, 26)) - storing character positions

Explanation
The sliding window technique maintains a window of unique characters. When we encounter a 
character already in the window, we move the left boundary to just after its previous occurrence. 
The hash map stores the most recent index of each character, allowing O(1) lookup to jump left 
pointer efficiently. The window size is the current substring length; we track maximum seen.

LC 9: 3Sum (LeetCode #15)
Problem: Given integer array, return all triplets [nums[i], nums[j], nums[k]] such 
that i != j != k and nums[i] + nums[j] + nums[k] = 0. Solution must not contain duplicate triplets.

Intuition
Fix one element, then use two-pointer technique on remaining array to find pairs that 
sum to negative of fixed element.

Brute Force Approach
Check all triplets.

vector<vector<int>> threeSum(vector<int>& nums) {
    set<vector<int>> resultSet;  // to handle duplicates
    int n = nums.size();
    
    for(int i = 0; i < n - 2; i++) {
        for(int j = i + 1; j < n - 1; j++) {
            for(int k = j + 1; k < n; k++) {
                if(nums[i] + nums[j] + nums[k] == 0) {
                    vector<int> triplet = {nums[i], nums[j], nums[k]};
                    sort(triplet.begin(), triplet.end());
                    resultSet.insert(triplet);
                }
            }
        }
    }
    
    vector<vector<int>> result(resultSet.begin(), resultSet.end());
    return result;
}
Time Complexity: O(n³ log n) - cubic with sorting for dedup
Space Complexity: O(n) - storing result set

Optimized Approach (Sorting + Two Pointers)
Sort array, fix first element, use two pointers for remaining.

vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    int n = nums.size();
    
    for(int i = 0; i < n - 2; i++) {
        // Skip duplicate i values
        if(i > 0 && nums[i] == nums[i-1]) continue;
        
        int target = -nums[i];
        int left = i + 1, right = n - 1;
        
        while(left < right) {
            int sum = nums[left] + nums[right];
            
            if(sum == target) {
                result.push_back({nums[i], nums[left], nums[right]});
                
                // Skip duplicates for left and right
                while(left < right && nums[left] == nums[left + 1]) left++;
                while(left < right && nums[right] == nums[right - 1]) right--;
                
                left++;
                right--;
            }
            else if(sum < target) {
                left++;
            }
            else {
                right--;
            }
        }
    }
    return result;
}
Time Complexity: O(n²) - sorting O(n log n) + two-pointer O(n²)
Space Complexity: O(1) or O(n) depending on sort implementation

Explanation
After sorting, for each index i, use two pointers to find pairs that sum to -nums[i]. 
Sorting helps skip duplicates and enables the two-pointer technique. 
The two-pointer approach works because if left + right is too small, increase left; 
if too large, decrease right. Skipping duplicates avoids adding the same triplet multiple times.

LC 10: Set Matrix Zeroes (LeetCode #73)
Problem: Given m x n matrix, if an element is 0, set its entire row and column to 0. Do it in-place.

Intuition
Use first row and first column as markers to store which rows/columns need to be zeroed.

Brute Force Approach
Use separate arrays to track zero positions.

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    vector<bool> zeroRows(m, false), zeroCols(n, false);
    
    // Mark rows and columns that contain zero
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(matrix[i][j] == 0) {
                zeroRows[i] = true;
                zeroCols[j] = true;
            }
        }
    }
    
    // Set marked rows to zero
    for(int i = 0; i < m; i++) {
        if(zeroRows[i]) {
            for(int j = 0; j < n; j++) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Set marked columns to zero
    for(int j = 0; j < n; j++) {
        if(zeroCols[j]) {
            for(int i = 0; i < m; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}
Time Complexity: O(m × n) - traverse matrix twice
Space Complexity: O(m + n) - extra arrays

Optimized Approach (In-place with First Row/Column)
Use first row and first column as markers.

void setZeroes(vector<vector<int>>& matrix) {
    int m = matrix.size(), n = matrix[0].size();
    bool firstRowZero = false, firstColZero = false;
    
    // Check if first row has any zero
    for(int j = 0; j < n; j++) {
        if(matrix[0][j] == 0) {
            firstRowZero = true;
            break;
        }
    }
    
    // Check if first column has any zero
    for(int i = 0; i < m; i++) {
        if(matrix[i][0] == 0) {
            firstColZero = true;
            break;
        }
    }
    
    // Use first row and column as markers
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][j] == 0) {
                matrix[i][0] = 0;  // mark row
                matrix[0][j] = 0;  // mark column
            }
        }
    }
    
    // Zero out cells based on markers
    for(int i = 1; i < m; i++) {
        for(int j = 1; j < n; j++) {
            if(matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }
    
    // Zero out first row if needed
    if(firstRowZero) {
        for(int j = 0; j < n; j++) matrix[0][j] = 0;
    }
    
    // Zero out first column if needed
    if(firstColZero) {
        for(int i = 0; i < m; i++) matrix[i][0] = 0;
    }
}
Time Complexity: O(m × n) - traverse matrix a few times
Space Complexity: O(1) - only a few boolean variables

Explanation
The key insight is using the first row and first column as storage for markers. 
This avoids O(m+n) extra space. First, check if first row/col originally contain zeros 
(need special handling). Then, for remaining cells, if a zero is found, mark its row 
in first column and its column in first row. Finally, traverse again and zero out cells 
based on these markers. At the end, handle first row and column separately.