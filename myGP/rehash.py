#!user/bin/env python
#-*- encoding:utf-8 -*-

import os

k = 8
w = 8
d = 256
q = 101
wt = 0
dict_fingerprints = {}
similarity_dict_pairfiles = {}
sort_dict_pairfiles = {}
dict_pairfiles = {}
lengthofpairs = 0
pairs = ''
kgram_amount = {}
finger_num = {}
filelist = []
temp = 0

with open('index_mygp','r') as files:
    dict_fingerprints = eval(files.read())

lexical_path = '../exS/'
for file_name in os.listdir(lexical_path):
    i = 0
    h = 1
    times = 0
    fingerpri = 10000
    locate = 0
    value_kgram = [1]
    file_size = 0

    fingerprints = {}
    kgram_list = []
    kgram = []
    window = []

    file_size = os.path.getsize(os.path.join(lexical_path,file_name))
    with open(os.path.join(lexical_path,file_name),'r') as files:
        while i <= file_size - k - 1:                             #create k-gram
            i += 1
            kgram_list.append(files.read(k)) 
            files.seek(i,0)
    kgram_amount[file_name] = 0
#pow(h,k-1)%q
    for i in range(1,k):
        h = (h * d) %q
    
#the value of the first k-gram
    kgram = kgram_list[0]
    for bit_range in range(0,k):
        value_kgram[0] = (value_kgram[0] * d + ord(kgram[bit_range])) % q

#all of the value of k-gram
    for kgram_range in range(1,file_size - k - 1):
        value_kgram.append((d * (value_kgram[kgram_range - 1] - 
            h * ord(kgram_list[kgram_range - 1][0])) + ord(kgram_list[kgram_range][k-1])) % q)

    #print value_kgram

    for window_range in range(0,len(value_kgram) - w + 1):
        window = value_kgram[window_range:window_range + w]
        for min_locate in range(0,w):
            if window[min_locate] <= fingerpri:
                fingerpri = window[min_locate]
                locate = min_locate + window_range
        if fingerprints.get(fingerpri) == None:
            fingerprints[fingerpri] = fingerpri
            if dict_fingerprints.has_key(fingerpri):
                if dict_fingerprints[fingerpri].has_key(file_name):
                    finger_num[file_name] = dict_fingerprints[fingerpri][file_name]
                    kgram_amount[file_name] += len(dict_fingerprints[fingerpri][file_name])
                    for files in dict_fingerprints[fingerpri]:
                        if file_name != files:
                            if dict_pairfiles.get(file_name) == None:
                                dict_pairfiles[file_name] = {files:dict_fingerprints[fingerpri][files]}
                            else:
                                if dict_pairfiles[file_name].get(files) == None:
                                    dict_pairfiles[file_name][files] = dict_fingerprints[fingerpri][files]
                                else:
                                    dict_pairfiles[file_name][files] = dict_pairfiles[file_name][files]+dict_fingerprints[fingerpri][files]
        fingerpri = 10000


#print dict_pairfiles['21']['26']
#for files in dict_pairfiles:
#    print files
#    print dict_pairfiles[files]

for files in dict_pairfiles:
    for eachfile in dict_pairfiles[files]:
        if similarity_dict_pairfiles.get(files) == None:
            similarity_dict_pairfiles[files] = {eachfile:100*(len(dict_pairfiles[files][eachfile])+len(dict_pairfiles[eachfile][files]))/(kgram_amount[files]+kgram_amount[eachfile])}
        else:
            similarity_dict_pairfiles[files][eachfile] = 100*(len(dict_pairfiles[files][eachfile])+len(dict_pairfiles[eachfile][files]))/(kgram_amount[files]+kgram_amount[eachfile])

for ranges in similarity_dict_pairfiles:
    print '文档'+ranges+' ：'
    sort_dict_pairfiles[ranges] = sorted(similarity_dict_pairfiles[ranges].iteritems(), key=lambda d:d[1], reverse = True)
    print sort_dict_pairfiles[ranges]
    print

#sort the pair of files with the amounts of their matches
#for files in dict_pairfiles:
    #for percent in dict_pairfiles[files]:
        #dict_pairfiles[files][percent] = 100*dict_pairfiles[files][percent]/(kgram_amount[files]+kgram_amount[percent])
    #sort_dict_pairfiles[files] = sorted(dict_pairfiles[files].iteritems(), key=lambda d:d[1], reverse = True)

#print sort_dict_pairfiles
#for files in sort_dict_pairfiles:
#    for tuples in sort_dict_pairfiles[files]:
#        tuples = list(tuples)
#        if tuples[1]> temp:
#            temp = tuples[1]
#print temp
#    print sort_dict_pairfiles[files]

