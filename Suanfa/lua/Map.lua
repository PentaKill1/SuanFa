map = {}
map.__index = map

function map:new()
	local o = {}
	setmetatable(o, map)
	o.tempMap = {}
	return o
end

-- 添加数据
function map:insert(key, value)
     self.tempMap[key] = value
end

-- 相当于 map[key]  按照key值进行查找 如果找到则返回对应的value值 如果没找到 则创建一个key值 并将对应的值返回
function map:at(key)
	return self.tempMap[key]
end

-- 获取map的大小 # table.gen()  
function map:size()
	local count = 0 
	for k, v in pairs(self.tempMap) do
		if v then
			count = count + 1
		end
	end
	return count
end

-- 查找 按照key值进行查找 如果找到则返回该位置的迭代器 如果没找到 返回一个空的迭代器
function map:find(key)
	return self.tempMap[key]
end

-- 删除
function map:erase(key)
	self.tempMap[key] = nil
end

-- 清空
function map:clear()
	local count = self:size()
    for i = count, 1, -1 do
        self.tempMap[i] = nil
    end
end

-- 迭代器
function map:iterator()
	return pairs(self.tempMap)
end

-- testCase
function testCase()
	local m = map:new()
	-- 在map中添加元素
	m:insert(1, "string1")
	m:insert(2, "string2")
	m:insert(3, "string3")
	m:insert(4, "string4")
	m:insert(5, "string5")
	m:insert("s1", "string6")
	-- map大小
	print("map大小为：", m:size())

	for key, value in pairs(m.tempMap) do
		print("map的k,v:", key, value)
	end

	-- 查找索引为s1的值
	print(m:at('s1'))
	-- 查找索引为8的值
	print(m:at(8))
	-- 查找索引为4的值
	print("索引为4的值：", m:find(4))
	-- 删除索引为5的值	
	m:erase(5)

	-- 有序迭代器
 	for k, v in m:iterator() do
 		print("\n删除索引为5的元素之后的k,v", k, v)
 	end

	-- 清空map
    m:clear()
    print(m:size())

end

testCase()