//
//  OPbjective.h
//  OPbjective
//
//  Created by Kirk Roerig on 8/20/14.
//  Copyright (c) 2014 OPifex. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Math/linearAlgebra.h"
#import "Rendering/Mesh.h"
#import "Rendering/Shader.h"
#import "Rendering/Texture.h"
#import "Audio/Sound.h"

#define RAND_F_NORM (((rand() % 2048) / 1024.0f) - 1.0f)
#define RAND_F ((rand() % 1024) / 1024.0f)

static inline void vec3_rand_norm(vec3 result){
    result[0] = RAND_F_NORM;
    result[1] = RAND_F_NORM;
    result[2] = RAND_F_NORM;
    vec3_norm(result, result);
}

@interface OPjective : NSObject

@end
