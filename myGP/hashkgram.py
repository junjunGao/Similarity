#!user/bin/env python
#-*- encoding:utf-8 -*-

import os
#import rehash

k = 8
w = 8
d = 256
q = 101
wt = 0
index_fingerprints = {}

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
    #locate_list_fingerprints = []
    file_locate_fingerprints = {}

    file_size = os.path.getsize(os.path.join(lexical_path,file_name))
    with open(os.path.join(lexical_path,file_name),'r') as files:
        while i <= file_size - k - 1:                             #create k-gram
            i += 1
            kgram_list.append(files.read(k)) 
            files.seek(i,0)

#pow(h,k-1)%q
    for i in range(1,k):
        h = (h * d) %q

#the value of the first k-gram
    kgram = kgram_list[0]
    for bit_range in range(0,k):
        value_kgram[0] = (value_kgram[0] * d + ord(kgram[bit_range])) % q

#all of the value of k-gram
    for kgram_range in range(1,file_size - k -1):
        value_kgram.append((d * (value_kgram[kgram_range - 1] - 
            h * ord(kgram_list[kgram_range - 1][0])) + ord(kgram_list[kgram_range][k-1])) % q)

    for window_range in range(0,len(value_kgram) - w + 1):
        window = value_kgram[window_range:window_range + w]
        for min_locate in range(0,w):
            if window[min_locate] <= fingerpri:
                fingerpri = window[min_locate]
                locate = min_locate + window_range
        if fingerprints.get(fingerpri) == None:
            fingerprints[fingerpri] = locate
            if index_fingerprints.get(fingerpri) == None:
                index_fingerprints[fingerpri] = {file_name:[str(locate)]}
            else:
                if index_fingerprints[fingerpri].get(file_name):
                    index_fingerprints[fingerpri].get(file_name).append(str(locate))
                else:
                    index_fingerprints[fingerpri][file_name] = [str(locate)]
        fingerpri = 10000

with open('index_mygp','w') as files:
    files.write(str(index_fingerprints))
