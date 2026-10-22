class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        clean_s = s.replace(" ", " ").lower()
        clean_t = t.replace(" ", " ").lower()

        if(sorted(clean_s) ==  sorted(clean_t)):
            return True
        else:
            return False
        