vector = {}
vector.__index = vector
function vector:new()
	local o = {}
	setmetatable(o,vector)
	o.tempVec = {}
	return o
end

-- 查找
function vector:at(index)
  	return self.tempVec[index]
end

-- 在vector后面压入一个数据 增加
function vector:push_back(val)
	table.insert(self.tempVec,val)
end

-- 在vector删除一个元素  删除
function vector:pop_back()
	table.remove(self.tempVec)
end
-- 删除某个位置的元素 删除
function vector:erase(index)
	table.remove(self.tempVec,index)
end

-- 判断vector的 长度
function vector:size()
	--return table.getn(self.tempVec)
     return #self.tempVec;
end

-- 迭代函数
function vector:iter()
	local idx = 0
	local count = self:size()

	return function ()
		idx = idx + 1 
		if idx <= count then 
			return idx,self.tempVec[idx]
		end 
	end
end

-- TestCase
function testCase()
	local a1 = vector:new()

	-- 在vector里添加元素
	for i = 10,5,-1 do
		a1:push_back(i)
	end

	-- 压人数据之后输出这个表
	for k,v in a1:iter() do
		print("压入数据之后的k,v:",k,v)
	end

	print("索引为2的值为：",a1:at(2))
	-- 查找一个错误的位置
	a1:at(15)

	print("vector的长度是：",a1:size())

	-- 删除索引为5的数据
	a1:erase(5)
	--删除一个错误的索引
	a1:erase(-9)
	-- 删除索引为5的数据之后的表数据
	for k,v in a1:iter() do
		print("删除索引为5的数据之后的k,v",k,v)
	end

	-- 删除最后一个数据
	a1:pop_back()

	--删除最后一个元素后 调用迭代器遍历表中数据
	for key,value in a1:iter() do
		print("a1中的key,value：",key,value)
	end
end

testCase()