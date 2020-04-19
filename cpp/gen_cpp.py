import os
import yaml

with open(os.path.dirname(__file__) + "/../msg_ids.yaml", 'r') as stream:
    try:
        data = yaml.safe_load(stream)
        print(data)
    except yaml.YAMLError as exc:
        print(exc)


with open(os.path.dirname(__file__) + '/messageConstants.hpp', 'w') as fout:
    fout.write('#pragma once\n\n')
    fout.write('namespace dh {\n\n')
    for x,y in data.items():
        # TODO: #define for len(y) == 1
        if(len(y)>1):
            fout.write('enum ' + x + ' { \n')
            for yi in y[:-1]:
                k = list(yi)[0];
                fout.write('    ' + k + ': ' + str(yi[k]) + ',\n')
            k = list(y[-1])[0];
            fout.write('    ' + k + ': ' + str(y[-1][k]) + '\n')
            fout.write('};\n')
    fout.write('}\n')
