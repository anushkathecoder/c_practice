from sketchpy import canvas
from turtle import screen
s=screen()
s.bgcolor("black")

ab=canvas.sketch_from_svg("lordshiva/shivji.svg",scale=45)
ab.draw()