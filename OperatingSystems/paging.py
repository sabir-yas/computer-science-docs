'''
Demonstration of simple page replacement algorithms

FIFO
LRU
Optimal

Usage

    python paging.py [number of page frames]
'''

# for obtaining command line parameters
import sys

# FIFO algorithm
def FIFO(size, pages):
    print('FIFO')
    SIZE = size
    count = 0
    memory = []
    faults = 0

    for page in pages:
        if memory.count(page) == 0 and count < SIZE:
            # memory not full - insert page - page fault




            print(' faults =', faults, 'inserting', page, 'memory = ', memory)
        elif memory.count(page) == 0 and count == SIZE:
            # memory is full - replace FIFO page - page fault




            print(' faults =', faults, 'inserting', page, 'memory = ', memory)
        else:
            # hit - nothing changes
            pass

    return faults

'''
LRU algorithm
'''
def LRU(size, pages):
    print('LRU')
    SIZE = size
    count = 0
    memory = []
    faults = 0

    for page in pages:
        if memory.count(page) == 0 and count < SIZE:
            # memory not full - insert page - page fault




            print(' faults =', faults, 'inserting', page, 'memory = ', memory)
        elif memory.count(page) == 0 and count == SIZE:
            # memory is full - replace LRU page - page fault
                       # remove least-recently-used page


            print(' faults =', faults, 'inserting', page, 'memory = ', memory)
        else:
            # hit - move page to most-recently-used position



    return faults

'''
OPTimal algorithm
'''
def OPT(size, pages):
    print('OPT')
    SIZE = size
    count = 0
    memory = []
    faults = 0

    for x, page in enumerate(pages):
        if memory.count(page) == 0 and count < SIZE:
            # memory not full - insert page - page fault



            print(' faults =', faults, 'inserting', page, 'memory = ', memory)
        elif memory.count(page) == 0 and count == SIZE:
            # memory is full - replace OPT page - page fault


            # find page whose next use is farthest in future


            for i in memory:








            # perform eviction and insertion




            print(' faults =', faults, 'inserting', page, 'memory = ', memory)
        else:
            # hit - nothing changes
            pass

    return faults

def main():
    pages = (7,0,1,2,0,3,0,4,2,3,0,3,2,1,2,0,1,7,0,1)
    #pages = (2,6,9,2,4,2,1,7,3,0,5,2,1,2,9,5,7,3,8,5)

    size = int(sys.argv[1])

    print(FIFO(size, pages), 'page faults.')
    print(LRU(size, pages), 'page faults.')
    print(OPT(size, pages), 'page faults.')

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print('Usage: python paging.py [number of pages frames]')
    else:
        main()
