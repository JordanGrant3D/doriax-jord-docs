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

## [Model](model.md).stopAnimations()

Fades out every running animation clip on this model over `fadeTime` seconds. Pair it with `resetToBindPose` when you need a clean bind-pose rest state afterwards.

```cpp
void stopAnimations(float fadeTime);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/model/model-stop-animations.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/model/model-stop-animations.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
