
class Coord3D:
    def __init__(self, x, y, z):
        self.x = x
        self.y = y
        self.z = z

def coord(pos, vel, dt):
    pos.x += vel.x * dt
    pos.y += vel.y * dt
    pos.z += vel.z * dt
    return pos.x, pos.y, pos.z
    

def main():
    pos = Coord3D (0, 0, 100.0)
    vel = Coord3D (1, -5, 0.2)

    print(coord(pos, vel, 2.0))

main()  
