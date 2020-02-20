testCasesTotal = input(' test cases\n')


def function():
	number = input('N ')
	students = int(number)
	p = input('P ')
	studentsOnTeam = int(p)
	Skill = []
	x = 0 
	while x < students:
		S = input('Skill ')
		skillOfStudents = int(S)
		Skill.append(skillOfStudents)
		x = x + 1
		if x == students:
			break
	for i in range (1, len(Skill)):
		key = Skill[i]
		j = i-1
		while j >= 0 and key < Skill[j]:
			Skill[j+1] = Skill[j]
			j = j -1
			Skill[j+1] = key
	maxTime = Skill[studentsOnTeam - 1]
	timeNeeded = 0
	k = 0
	while k < studentsOnTeam:
		timeNeeded = maxTime - Skill[k] + timeNeeded
		k = k + 1
	return timeNeeded
testCases = int(testCasesTotal)
currentTest = 1
while currentTest < testCases + 1:
	rezultat = function()
	print ('Case #', end = ' ')
	print (currentTest, end = ' ')
	print (': ', end = '')
	print (rezultat)
	currentTest = currentTest + 1
	
