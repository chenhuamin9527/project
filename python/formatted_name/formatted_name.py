def get_formatted_name(first_name, last_name, middle_name=''):
    # 返回整洁的名字
    if middle_name:
        full_name = first_name + ' ' + middle_name + ' ' + last_name
    else:
        full_name = first_name + ' ' + last_name
    return full_name.title()


musician_b = get_formatted_name('jimi', 'hendrix')
print(musician_b)

musician_a = get_formatted_name('john', 'hooker', 'lee')
print(musician_a)
