def Reflex_vacuum_agent(room, status):
    if room == 'A':
        next = 'B'
    else:
        next = 'A'
    if status == '1':
        print('SUCK')
        print('Move to  room', next)
    else:
        print('Move to  room', next)


room = input('Room(A or B): ')
status = input('status(1 for Dirt 0 for Clean): ')
Reflex_vacuum_agent(room, status)
