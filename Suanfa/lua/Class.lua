-- 实现cdx中class功能

-- 使用metatable实现类的单继承

-- 有相应的test case
-- 这个是父类为LuaObject  new（)方法通过元表__index创建实例   父类为C++Object时 new()方法通过 cls.__Create()函数创建实例

function class(classname, super)
	local cls = {}

	if super then
		cls = setmetatable({}, {__index = super})
		cls.super = super
	else
		cls = {ctor = function()end}
	end
	
	cls.__cname = classname
	cls.__index = cls

	
	function cls.new(...)
		local instance = setmetatable({}, cls)
		instance.class = cls
		-- 同 instance:ctor(...)
		cls.ctor(instance, ...)
		return instance
	end
	return cls
end

C1 = class('C1')

function C1:ctor(param)
	self.param = 0
	print("this is baseclass ctor,param is:", self.param)
end

function C1:test1()
	print("this is C1 test function")
end

C2 = class('C2', C1)

function C2:ctor(param)
	self.super:ctor(param)
	self.param = 1
	print("this is C2 ctor,param is:", self.param)
end

function C2:test2()
	print("this is C2 test function")
end

C3 = class('C3', C2)

function C3:ctor(param)
	self.super:ctor(param)
	self.param = 2
	print("this is C3 ctor,param is:", self.param)
end

function C3:test3()
	print("this is C3 test function")
end

local c1 = C1:new()

c1:test1()

local c2 = C2:new()

c2:test1()

local c3 = C3:new()

c3:test1()

