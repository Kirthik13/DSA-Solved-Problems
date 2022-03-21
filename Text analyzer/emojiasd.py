import emoji
from textblob import TextBlob
from emoji import emojize
y=input("enter ")
edu=TextBlob(y)
x=edu.sentiment.polarity
if x<0:
    print('-')
elif x==0:
    print("ne")
else:
    print(emojize(":slightly_smiling_face:"))
    print("po")
    