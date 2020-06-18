favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
}
# print("Sarah's favorite language is " +
#     favorite_languages['sarah'].title() + ".")

# for name in favorite_languages.keys():
#     print(name.title())

# friends = ['phil', 'sarah']
# for name in sorted(favorite_languages.keys()):
#     print(name.title())

#     if name in friends:
#         print(" Hi " + name.title() +
#             ", I see your favorite language is " +
#             favorite_languages[name].title() + "!")
#     if 'erin' not in favorite_languages.keys():
#         print("Erin, please take our poll!")

# print("The following languages have been mentioned:")
# for language in set(favorite_languages.values()):
#     print(language.title())

have_surveys = ['jen', 'sarah']
not_have_surveys = ['edward', 'phil']
for favorite_language in favorite_languages.keys():
    if favorite_language in have_surveys:
        print("Thank for surveying")
    else:
        print("Please participate in")
