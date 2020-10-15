people = ['Dr. Christopher Brooks', 'Dr. Kevyn Collins-Thompson',
          'Dr. VG Vinod Vydiswaran', 'Dr. Daniel Romero']


def split_title_and_name(person):
    name = person.split(' ')[0] + ' ' + person.split(' ')[-1]
    return name


print(list(map(split_title_and_name, people)))
