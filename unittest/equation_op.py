import cmath


class eq:
    def find(x, y, z):
        d = (y**2) - (4*x*z)
        if d < 0:
            return "Not Possible"

        sol1 = (-y - cmath.sqrt(d))/(2*x)
        sol2 = (-y+cmath.sqrt(d))/(2*x)
        return (sol1,sol2)