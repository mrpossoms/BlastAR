//
//  Creep.fsh
//  BlastAR!
//
//  Created by Kirk Roerig on 8/31/14.
//  Copyright (c) 2014 OPifex. All rights reserved.
//

varying lowp vec4 vColor;

uniform lowp vec3 uColor;

void main(void){
    
    if(vColor.a < 0.5) discard;
    
    gl_FragColor = vec4(uColor, 1.0) * vColor;
}