class Person:
    def __init__(self, name, age, gender):
        self.__name = name
        self.__age = age
        self.__gender = gender
        
    def rt_name(self):
        return self.__name
    
    def rt_age(self):
        return self.__age
    
    def rt_gen(self):
        return self.__gender
        
    def __str__(self):
        return f"{self.__name};{self.__age};{self.__gender}"
    
class Course:
    def __init__(self, course_id, course_name):
        self.__course_id = course_id
        self.__course_name = course_name
        
    def __str__(self):
        return f"{self.__course_id};{self.__course_name}"
    
    def rt_courid(self):
        return self.__course_id
    
    def rt_courname(self):
        return self.__course_name
    
class Student(Person):
    def __init__(self, name, age, gender, student_id):
        super().__init__(name, age, gender)
        self.__student_id = student_id
        self.__course = {}
        
    def update_score(self, course_id, score):
        self.__course[course_id] = score
        
    def __str__(self):
        rs = ""
        rs += f"{self.__student_id};{self.rt_name()};{self.rt_gen()}"
        for course in sorted(self.__course):
            rs += "\n"
            for cour in courses:
                if cour.rt_courid() == course:
                    rs += f"{course};{cour.rt_courname()};{self.__course[course]}"
                    break
        return rs
    
    def rt_stuid(self):
         return self.__student_id
    
n, m, q = [int(x) for x in input().split()]
student = []
courses = []

for i in range(n):
    name, age, student_id, gender = [x for x in input().split(';')]
    age = int(age)
    stu = Student(name, age, gender, student_id)
    student.append(stu)
    
for i in range(m):
    course_name, course_id = [x for x in input().split(';')]
    cour = Course(course_id, course_name)
    courses.append(cour)
    
for i in range(q):
    student_id, course_id, score = [x for x in input().split(';')]
    for stu in student:
        if stu.rt_stuid() == student_id:
            stu.update_score(course_id, score)
            break
   
for i in range(len(student)):
    for j in range(i+1, len(student)):
        if student[i].rt_stuid() > student[j].rt_stuid():
            temp = student[i]
            student[i] = student[j]
            student[j] = temp
            
print()

for stu in student:
    print(stu)