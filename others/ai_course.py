import urllib.request

from bs4 import BeautifulSoup

fundamental_courses = []
intermediate_courses = []

URL = 'https://mooc.aiat.or.th/superai-course-contents/'
with urllib.request.urlopen(URL) as response:
    html = response.read()

    bs = BeautifulSoup(html, 'html.parser')
    tables = bs.findAll('figure')
    cnt = 0
    for table in tables[:-1]:
        elm = table.findAll('td')
        for i in range(len(elm)):
            e = elm[i].string
            if cnt < 23:
                if e is not None and not e.isdigit() and len(e) > 1:
                    if e not in fundamental_courses:
                        fundamental_courses.append(e)
                        cnt += 1
            elif e is not None and not e.isdigit() and len(e) > 1:
                if e not in intermediate_courses and e not in fundamental_courses:
                    intermediate_courses.append(e)

c =1
for f in fundamental_courses:
    print(c, f)
    c+=1

print('-'*40)
c = 1
for i in intermediate_courses:
    print(c, i)
    c+= 1

    

cnt=1
f = open('fundamental.txt', 'a')
for course in fundamental_courses:
    f.write(f'{cnt}. {course} \n\n')
    cnt += 1
f.close()

cnt=1
f = open('intermediate.txt', 'a')
for course in intermediate_courses:
    f.write(f'{cnt}. {course} \n\n')
    cnt += 1
f.close()

