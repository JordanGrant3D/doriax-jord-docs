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

## [FileData](file-data.md).~FileData()

Virtual destructor. Concrete streams created with `newFile` are released through it. The CharacterController config script deletes its `saves/tutorial_config.json` stream through a `FileData*` pointer.

```cpp
virtual ~FileData();
```

```c++ title="testerScript.cpp"
--8<-- "code/core/assets/file-data/file-data-destructor.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/assets/file-data/file-data-destructor.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
