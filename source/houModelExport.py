import hou

def writeData(path, mesh_name, data):
    f = open(path + '\\' + mesh_name + '.h', 'w')
    f.write(data)
    f.close()

node = hou.selectedNodes()[0]
geo = node.geometry()
prims = geo.prims()
points = geo.points()

indices_str = ''
for prim in prims:
    indices_str += str(prim.points()[0].number()) + ', ' + str(prim.points()[1].number()) + ', ' + str(prim.points()[2].number()) + ', ' + '\n'
    
vertices_str = ''
for point in points:
    vertices_str += str(point.position())[1:-1] + ', ' + str(point.attribValue('uv')[0]) + ', ' + str(point.attribValue('uv')[1]) + ',\n'

# f = open('\\devel\\sphere.txt', 'w')
# f.write(indices_str)
# f.close()

writeData('\\devel\\cgfx\\source', 'sphereIndices', indices_str)
writeData('\\devel\\cgfx\\source', 'sphereVertices', vertices_str)
