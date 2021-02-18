def split_and_join(line):
    a=line.split(" ")
    k="-".join(a)
    return k
    # write your code here

if __name__ == '__main__':
    line = raw_input()
    result = split_and_join(line)
    print result
