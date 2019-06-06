
"use strict";

let TransformToSphericalCoord = require('./TransformToSphericalCoord.js')
let TransformFromSphericalCoord = require('./TransformFromSphericalCoord.js')
let SetOriginSphericalCoord = require('./SetOriginSphericalCoord.js')
let SetCurrentModel = require('./SetCurrentModel.js')
let SetCurrentVelocity = require('./SetCurrentVelocity.js')
let SetCurrentDirection = require('./SetCurrentDirection.js')
let GetOriginSphericalCoord = require('./GetOriginSphericalCoord.js')
let GetCurrentModel = require('./GetCurrentModel.js')

module.exports = {
  TransformToSphericalCoord: TransformToSphericalCoord,
  TransformFromSphericalCoord: TransformFromSphericalCoord,
  SetOriginSphericalCoord: SetOriginSphericalCoord,
  SetCurrentModel: SetCurrentModel,
  SetCurrentVelocity: SetCurrentVelocity,
  SetCurrentDirection: SetCurrentDirection,
  GetOriginSphericalCoord: GetOriginSphericalCoord,
  GetCurrentModel: GetCurrentModel,
};
