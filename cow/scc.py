list1 = []
list2 = []
list4 = []
with open('out.txt','r') as f:
	for line in f.readlines():
		curlist = line.split(' ')
		for index in range(len(curlist)):
			list1.append(int(curlist[index]))

with open('out1.txt','r') as f:
	for line in f.readlines():
		curlist = line.split(' ')
		for index in range(len(curlist)):
			list2.append(int(curlist[index]))

with open('in.txt','r') as f:
	for line in f.readlines():
		curlist = line.split(' ')
		for index in range(len(curlist)):
			list4.append(curlist[index])

list3 = []
print(len(list1), len(list2), len(list4))
# for i in range(len(list1)):
# 	if list1[i] != list2[i]:
# 		#print(i // 3, i % 3)
# 		list3.append(i//3)

# with open('out.txt', 'r') as f:
# 	cnt = 0
# 	for line in f.readlines():
# 		for ix in range(len(list3)):
# 			if cnt == list3[ix]:
# 				print(line)
# 				print("=============================================")