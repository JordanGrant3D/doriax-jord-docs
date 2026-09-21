---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
FileData
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [FileData](file-data.md).getFilePathExtension()

Returns the extension of `filepath` without the dot, or an empty string when there is none. The CharacterController loader uses it to confirm `saves/tutorial_slot0.json` really is a `json` config before parsing.

```cpp
static std::string getFilePathExtension(const std::string &filepath);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-get-file-path-extension.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-get-file-path-extension.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
