import re
#findall method returns all occurences and returns [] if not found

s="ABCDE1233"
r=re.compile("[A-Z]{5}[0-9]{3}[A-Z]{1}")
l=re.findall(r,s)
print(l)

#search method

s="09-10-2020"
r=re.compile("^\d{2}-\d{2}-\d{4}")
l=re.search(r,s)
print(l)

#match method

s="the ps course id is CS*1002"

r=re.compile("CS\W\d{4}")
l=re.search(r,s)
if l:
    print(l.group(0))
else:
    print("pattern not found")