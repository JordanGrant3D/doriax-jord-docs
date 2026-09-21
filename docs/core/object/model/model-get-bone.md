[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Model
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Model](model.md).getBone()

Returns a `Bone` handle by joint name or by glTF node index (`id`, which can differ from the joint's ordinal in a skin's joint list). A `Bone` inherits [**Object**](../object.md), so you can read and write its local transform to override the skeleton, e.g. aiming a head bone while a walk cycle plays.

```cpp
Bone getBone(const std::string& name);
Bone getBone(int id);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-get-bone.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-get-bone.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
