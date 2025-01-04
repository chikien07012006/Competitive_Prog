def checking(string1, string2):
    if string1 == string2:
        return True
    return False

s1 = input()
s2 = input()

if checking(s1[2:len(s1)] + s1[0:2], s2) or checking(s1[len(s1)-2:len(s1)] + s1[0:len(s1)-2], s2):
    print("True")
    exit()
        
print("False")
